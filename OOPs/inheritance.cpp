#include <bits/stdc++.h>
#include<iostream>
using namespace std;

class Human {
    public:
        int height = 30;
        int weight = 40;
        int age = 50;
    
    public:
        int getAge() {
            return this->age;
        }
        void setWeight(int w) {
            this->weight = w;
        }
};

class Male: protected Human {
    public:
        string color;

        void sleep() {
            cout << "Male is sleeping" << endl;
        }

        int getHeight() {
            return this-> height;
        }
};

int main(){

    Male m1;
    cout << m1.getHeight() << endl;


    
    // Male object1;

    // cout << object1.age << endl;
    // cout << object1.weight << endl;
    // cout << object1.height << endl;

    // cout << object1.color << endl;

    // object1.setWeight(84);
    // cout << object1.weight << endl;
    // object1.sleep();

    return 0;
    
}