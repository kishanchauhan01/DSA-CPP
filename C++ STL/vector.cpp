#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v;
    vector<int> a(5,1);//here 5 is size of arr and initalized with 1 by default 0
    vector<int> last(a);//copy the a vector into last vector
    vector<vector<int>> ans = {{1,2,3,4}, {1,2,3,4}, {1,2,3,4}, {1,2,3,4}};
    cout << "size of ans" << ans.size() << endl;



    cout << "Capacity of v:- " << v.capacity() << endl;
    v.push_back(1);
    cout << "Capacity of v:- " << v.capacity() << endl;
    v.push_back(2);
    cout << "Capacity of v:- " << v.capacity() << endl;
    v.push_back(3);
    cout << "Capacity of v:- " << v.capacity() << endl;
    v.push_back(4);
    cout << "Capacity of v:- " << v.capacity() << endl;
    v.push_back(5);
    cout << "Capacity of v:- " << v.capacity() << endl;
    //capacity is increase by 2 means in multiple of two

    cout << "size of v:- " << v.size() << endl;

    cout << "element at 2 index:- " << v.at(2) << endl;

    cout << "front: " << v.front() << endl;
    cout << "back: " << v.back() << endl;

    cout << "before pop" << endl;
    for(int i:v) {
        cout << i << " ";
    }cout << endl;

    v.pop_back();
    

    cout << "after pop" << endl;
    for(int i:v) {
        cout << i << " ";
    }cout << endl;

    cout << "before clearing the vector: " << v.size() << endl;
    v.clear();
    cout << "after clearing the vector: " << v.size() << endl;

    return 0;
}