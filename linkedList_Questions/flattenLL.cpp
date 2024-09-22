/*
 * Definition for linked list.
 * class Node {
 *  public:
 *		int data;
 *		Node *next;
 * 		Node *child;
 *		Node() : data(0), next(nullptr), child(nullptr){};
 *		Node(int x) : data(x), next(nullptr), child(nullptr) {}
 *		Node(int x, Node *next, Node *child) : data(x), next(next), child(child) {}
 * };
 */

// https://www.naukri.com/code360/problems/flatten-a-linked-list_1112655

Node* merge_sortedLL(Node* &l1, Node* &l2)
{
    if(l1==NULL) return l2;
    if(l2==NULL) return l1;

    Node* temp = new Node(-1);
    Node* ptr = temp;
    while(l1!=NULL && l2!=NULL)
    {
        if(l1->data < l2->data)
        {
            ptr->child = l1;
            ptr = l1;
            l1 = l1->child;
        }
        else
        {
            ptr->child = l2;
            ptr = l2;
            l2 = l2->child;
        }
    }
    if(l1==NULL)
    {
        ptr->child = l2;
    }
    else
    {
        ptr->child = l1;
    }

    return temp->child;
}

Node* flattenLinkedList(Node* &head) 
{
    if(head == NULL) return head;
    if(head->next == NULL)
    {
        return head;
    }
	
    Node* l1 = head;
    Node* l2 = flattenLinkedList(head->next);
    l1->next = NULL;

    Node* ans = merge_sortedLL(l1, l2);
    return ans;
}
