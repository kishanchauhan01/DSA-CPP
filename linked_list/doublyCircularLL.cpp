#include <bits/stdc++.h>
#include <iostream>
using namespace std;

class DoublyCircularLL {
    class Node {
        public:
            int data;
            Node* prev;
            Node* next;

            Node(int d) {
                this -> data = d;
                this -> next = NULL;
                this -> prev = NULL;
            }
    };

    Node* head;
    Node* tail;
    int size;
    
    public:
        DoublyCircularLL() {
            this -> head = nullptr;
            this -> tail = nullptr;
            this -> size = 0;
        }

        //All the methods

        int get_lenght() {
            return this -> size;
        }

        bool isEmpty() {
            return this->size == 0;
        }

        void insertAtHead(int val) {
            Node* temp = new Node(val);
            //if the list is empyt
            if(this->isEmpty()) {
                head = temp;
                tail = temp;
                head->next = head;
                head->prev = head;
            }
            else {
                temp->next = head;
                temp->prev = tail;
                head->prev = temp;
                tail->next = temp;
                head = temp;
            }
            size++;
        }

        void print() {
            if(this->isEmpty()) {
                cout << "Linked List is empty" << endl;
            }
            else {
                Node* temp = head;
                while(true) {
                    cout << temp->data << "-> " << "";
                    if(temp->next == head) {
                        cout << "repeat" << endl;
                        break;
                    }
                    temp = temp->next;
                }
            }
        }

};

int main(){
    DoublyCircularLL dcl;
    dcl.insertAtHead(5);
    dcl.insertAtHead(4);
    dcl.insertAtHead(3);
    dcl.insertAtHead(2);
    dcl.insertAtHead(1);
    dcl.print();


    return 0;
}