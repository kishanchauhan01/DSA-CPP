#include <bits/stdc++.h>
#include<iostream>
using namespace std;

class Node {
    public:
        int data;
        Node* next;
    
    //constructor
    Node(int d) {
        this -> data = d;
        this -> next = NULL;
    }

    ~Node() {
        int value = this -> data;
        if(this -> next == NULL) {
            delete next;
            this -> next = NULL;
        }
        cout << "memory is free for node with data " << value << endl;
    }

};

void insertNode(Node* &tail, int element, int d) {

    //Empty list
    if(tail == NULL) {
        Node* newNode = new Node(d);
        tail = newNode;
        newNode -> next = newNode;
    }

    else {
        //non-empty list
        //assuming that the element is present in  the list
        
        Node *curr = tail;

        while(curr -> data != element) {
            curr = curr -> next;
        }
        
        //element found -> curr is representing the element wala node

        Node* temp = new Node(d);
        temp -> next = curr -> next;
        curr -> next = temp;

    }

}

void print(Node* tail) {
    
    Node* temp = tail;

    if(tail == NULL) {
        cout << "List is empty" << endl;
        return;
    }

    do {
        cout << tail -> data << " ";
        tail = tail -> next;
    } while(tail != temp);
    cout << endl;

}

void deleteNode(Node* &tail, int value) {

    //empty list
    if(tail == NULL) {
        cout << "List is empty" << endl;
        return;
    }
    else{
        //non-empty list
        //assuming that "value" is present in LL

        Node* prev = tail;
        Node* curr = prev -> next;

        while(curr -> data != value) {
            prev = curr;
            curr = curr -> next;
        }

        prev -> next = curr -> next;

        //1 node LL
        if(curr == prev) {
            tail = NULL;
        }

        //>=2 Node LL
        if(tail == curr) {
            tail = prev;
        }
        curr -> next = NULL;
        delete curr;

    }
    
}

bool isCircularList(Node* tail) {

    if(tail == NULL) {
        return true;
    }

    Node* temp = tail -> next;

    while(temp != NULL && temp != tail) {
        temp = temp -> next;
    }

    if(temp == tail) {
        return true;
    }
    
    return false;

}

bool detectLoop(Node* head) {
    if(head == NULL) {
        return false;
    }

    map <Node*, bool> visited;

    Node* temp = head;

    while(temp != NULL) {
        //cycle s present
        if(visited[temp] == true) {
            return 1;
        }

        visited[temp] = true;
        temp = temp -> next;

    }

    return 0;


}


int main(){
    
    Node* tail = NULL;

    //empty list me insert
    insertNode(tail, 5, 3);
    print(tail);

    insertNode(tail, 3, 5);
    print(tail);

    /*insertNode(tail, 5, 7);
    print(tail);

    insertNode(tail, 7, 8 );
    print(tail);

    insertNode(tail, 5, 6 );
    print(tail);
    */

    // deleteNode(tail, 5);
    // print(tail);

    if(isCircularList(tail)) {
        cout << "LL is circular" << endl;
    }
    else {
        cout << "LL is not circular" << endl;
    }


    return 0;
}
