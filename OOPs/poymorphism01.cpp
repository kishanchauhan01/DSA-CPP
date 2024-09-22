#include <bits/stdc++.h>
#include<iostream>
using namespace std;

class A {
    public:
        void sayHello() {
            cout << "hello Love Babbar" << endl;
        }

        int sayHello(char n) {
            cout << "hello Love Babbar" << endl;
            return 1;
        }
        
        void sayHello(string name) {
            cout << "hello Love Babbar" << endl;
        }
};

class B {
    public:
        int a;
        int b;

        void operator+ (B &obj) {
            int val1 = this->a;
            int val2 = obj.a;
            cout << val2-val1 << endl;
        }
};

class Animal {
    public:
        void speak() {
            cout << "speaking" << endl;
        }
};

class Dog: public Animal {
    public:
        void speak() {
            cout << "barking" << endl;
        }
};


int main(){
    // A obj;
    // obj.sayHello();

    // B obj1, obj2;
    // obj1.a = 4;
    // obj2.a = 7;

    // obj1 + obj2;

    Dog obj;
    obj.speak();//if in Dog class there is no function speak() then parent class function envoked

    return 0;
    
}