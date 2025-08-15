#include <bits/stdc++.h>

#include <iostream>
using namespace std;

class Node {
   public:
    int data;
    Node* next;

    Node(int data) {
        this->data = data;
        this->next = nullptr;
    }

    ~Node() { cout << "Memory is free for node with data" << data << endl; }
};

class Queue {
   private:
    Node* front;
    Node* rear;
    int size;
    int capacity;

   public:
    Queue(int cap) {
        front = rear = nullptr;
        size = 0;
        capacity = cap;
    }

    bool isEmpty() { return size == 0; }

    bool isFull() { return size == capacity; }

    void enqueue(int data) {
        if (isFull()) {
            cout << "Queue is full" << endl;
            return;
        }

        Node* newNode = new Node(data);

        if (rear == nullptr) {
            front = rear = newNode;
        } else {
            rear->next = newNode;
            rear = newNode;
        }

        size++;
    }

    void dequeue() {
        if (isEmpty()) {
            cout << "Queue is empty can't remove the data" << endl;
            return;
        }

        Node* temp = front;
        front = front->next;
        temp->next = nullptr;
        delete temp;

        size--;
    }

    void print() {
        Node* curr = front;
        while (curr != nullptr) {
            cout << curr->data << "<-";
            curr = curr->next;
        }
        cout << "Null" << endl;
    }
};

int main() {
    Queue q(4);

    // q.dequeue();
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    q.enqueue(4);
    q.enqueue(5);
    q.enqueue(6);
    q.dequeue(); 
    q.print();

    return 0;
}