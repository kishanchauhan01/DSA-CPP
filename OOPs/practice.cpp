#include <bits/stdc++.h>

#include <iostream>
using namespace std;

class Hero {
   private:
    int health;
    int power;

   public:
    char *name;
    char level;
    static int objectCount;

    Hero(int health, const char name[], char level) {
        objectCount++;
        this->health = health;
        char *ch = new char[100];
        strcpy(ch, name);
        this->name = ch;
        this->level = level;
    }

    void setPower(int power) { this->power = power; }

    int getPower() { return this->power; }

    void print() {
        cout << endl;
        cout << " [ Name: " << this->name << ",";
        cout << "Level: " << this->level << ",";
        cout << "Health: " << this->health << ",";
        cout << "Power: " << this->power << "]" << endl;
    }

    ~Hero() { delete[] name; }
};

int Hero::objectCount = 0;

int main() {
    Hero *kishan = new Hero(5, "Chauhan", '4');
    Hero Jay(4, "kishan", '6');

    kishan->setPower(5);
    kishan->print();

    cout << "Number of objects: " << Hero::objectCount << endl;

    delete kishan;

    return 0;
}