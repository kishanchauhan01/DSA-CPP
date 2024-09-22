// https://leetcode.com/problems/palindrome-linked-list/


/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
private:
    ListNode* getMid(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head -> next;

        while(fast != NULL && fast -> next != NULL) {
            fast = fast -> next -> next;
            slow = slow -> next;
        }
        return slow;

    }

    ListNode* reverse(ListNode* head) {
        if(head == NULL || head -> next == NULL) 
            return head;

        ListNode* chotaHead = reverse(head -> next);

        head -> next -> next = head;
        head -> next = NULL;

        return chotaHead;
    }

public:
    bool isPalindrome(ListNode* head) {
        if(head == NULL && head -> next == NULL) {
            return true;
        }

        //step1: get the middle
        ListNode* middle = getMid(head);

        //step2: reverse list after middle
        ListNode* temp = middle -> next;
        middle -> next = reverse(temp);

        //step3: compare both halves
        ListNode* head1 = head;
        ListNode* head2 = middle -> next;

        while(head2 != NULL) {
            if(head1 -> val != head2 -> val) {
                return false;
            }
            head1 = head1 -> next;
            head2 = head2 -> next;
        }

        return true;

    }
};