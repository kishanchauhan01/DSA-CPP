#include <bits/stdc++.h>
#include<iostream>
// #include "hero.cpp"
using namespace std;

class Hero{

    //properties
    private:
        int health;

    public:
        char *name;
        char level;
        // static int timeTocomplete;

        // Hero() {
        //     cout << "constructor called" << endl;
        //     name = new char[100];
        // }

        // Hero(int health, char level) {
        //     // cout << "this -> " << this << endl;
        //     this -> level = level;
        //     this -> health = health;
        // }

        // //!copy constructor
        // Hero(Hero& temp) {
        //     //*deep copy
        //     char *ch = new char[strlen(temp.name) + 1];
        //     strcpy(ch, temp.name);
        //     this->name = ch;
        //     //*deep copy end here

        //     cout << "Copy constructro called" << endl;
        //     this->health = temp.health;
        //     this->level = temp.level;
        // }

        // void print() {
        //     cout<< endl;
        //     cout << " [ Name: " << this->name << ",";
        //     cout << "Level: " << this->level << ",";
        //     cout << "Health: " << this->health << " ]";
        //     cout<< endl;
        // }

        // int getHealth() {
        //     return health;
        // }

        // char getLevel() {
        //     return level;
        // }

        // void setHealth(int h) {
        //     health = h;
        // }

        // void setLevel(char ch) {
        //     level = ch;
        // }

        // void setName(char name[]) {
        //     strcpy(this->name, name);
        // }

        // ~Hero() {
        //     cout << "Destructor bhai called" << endl;
        // }

};

// int Hero::timeTocomplete = 5;


int main(){

    //!creation of Object
    Hero ramesh;

    // cout << "size of ramesh:- " << sizeof(ramesh) << endl;

    // ramesh.health = 70;
    // ramesh.level = 'A';

    // // use setter
    // ramesh.setHealth(70);
    // ramesh.setLevel('A');

    // cout << "health is: " << ramesh.getHealth() << endl;
    // cout << "level is: " << ramesh.getLevel() << endl;

    // ----------------------------------------------------------------------------------------------

    //*dynamically

    // Hero *b = new Hero;

    // b->setHealth(80);
    // b->setLevel('A');

    // cout << "level is:- " << (*b).level << endl;
    // cout << "health is:- " << (*b).getHealth() << endl;

    // cout << "level is:- " << b->level << endl;
    // cout << "health is:- " << b->getHealth() << endl;

    // delete b;

    // ------------------------------------------------------------------------------------------------

    //!constructor

    //object created statically
    // Hero ramesh(10);
    // cout << "address of ramesh- " << &ramesh << endl;

    //dynamically
    // Hero *b = new Hero/(); //new Hero is also work

    //----------------------------------------------------------------------------------------------------

    //!copy constructor

    // Hero suresh(70, 'A');
    // suresh.print();

    // //Copy Constructor
    // Hero R(suresh);
    // R.print();

    //------------------------------------------------------------------------------------------------------

    //!shallow copy and deep copy

    // Hero hero1;

    // hero1.setHealth(12);
    // hero1.setLevel('A');
    // char name[7] = "Kishan";
    // hero1.setName(name);

    // // hero1.print();

    // //Use Default copy constructor

    // Hero hero2(hero1);
    // // hero2.print();
    // //Hero hero2 = hero1;

    // hero1.name[0] = 'G';
    // hero1.print();

    // hero2.print();

    // hero1 = hero2;

    // hero1.print();

    // hero2.print();

    // ---------------------------------------------------------------------------------------------------

    //! Destructor

    // //static
    // Hero a;//is keliye automatically destructor call hoga kyoki ye static allocation he par dynamic me nahi hoga

    // //dynamically

    // Hero *b = new Hero();//is ke liye manually kaarna padega
    // delete b;

    // ---------------------------------------------------------------------------------------------------

    //! static keyword

    // cout << Hero::timeTocomplete << endl;

    // Hero a;
    // cout << a.timeTocomplete << endl;



    return 0;
}