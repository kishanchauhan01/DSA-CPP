#include <bits/stdc++.h>
#include<iostream>
using namespace std;


class Stack {

    public:
        class Node {
            public:
                int data;
                Node* next;

                Node(int data) {
                    this -> data = data;
                    this -> next = NULL;
                }

                ~Node() {
                    int value = this -> data;
                    //memory free
                    if(this->next == NULL) {
                        delete next;
                        this -> next = NULL;
                }
                cout << "memory is free for node with data " << value << endl;
        }


    };

    public:

        Node* head;

        Stack() {
            this -> head = NULL;
        }

        bool isEmpty() {
            return head == NULL;
        }

        void push(int data) {
            Node* newNode = new Node(data);

            //here we alloacting heap memory so if our newNode pointer is not allocted in heap memory that means we don't much space to allocate it in heap memory
            if(!newNode) {
                cout << "Stack is overflow" << endl;
                return;
            }

            newNode -> next = head;
            head = newNode;

        }

        void pop() {
            if(isEmpty()) {
                cout << "Stack is underflow" << endl;
                return;
            }

            Node* temp = head;
            head = temp -> next;

            temp -> next = NULL;

            delete temp;

        }

        void peek() {
            if(!isEmpty()) {
                cout << "top element is:- " << head -> data << endl;
            }
            else{
                cout << "stack is empty" << endl;
            }
        }

        void print() {
            Node* temp = head;
            while(temp != NULL) {
                cout << temp -> data << " ";
                temp = temp -> next;
            }
            cout << endl;
        }

};


int main() {
    Stack st;

    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);

    st.peek();
    st.print();
    st.pop();
    st.peek();

}