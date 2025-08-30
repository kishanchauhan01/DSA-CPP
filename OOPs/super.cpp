#include <bits/stdc++.h>

#include <iostream>
using namespace std;

class Animal {
   public:
    Animal() { cout << "Animal constructor called" << endl; }

    void speak() { cout << "Animal speak" << endl; }
};

class Dog : public Animal {
   public:
    Dog() : Animal() { cout << "Dog constructor called" << endl; }

    void speak() {
        Animal::speak();
        cout << "Dog braks" << endl;
    }
};

int main() {
    Animal a;
    a.speak();

    Dog d;
    d.speak();

    return 0;
}