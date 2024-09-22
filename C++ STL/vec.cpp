//The C++ Standard Library vector class is a class template for sequence containers. A vector stores elements of a given type in a linear arrangement, and allows fast random access to any element. A vector is the preferred container for a sequence when random-access performance is at a premium. 

//Vector is a sequential container to store elements and not index based. Array stores a fixed-size sequential collection of elements of the same type and it is index based. Vector is dynamic in nature so, size increases with insertion of elements. As array is fixed size, once initialized can't be resized.

#include <iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v;

    vector<int> a(5,1);// 5 means size of vector and 1 means it initialize the vector by 1 otherwise it initialize by 0 
    cout << "Print a" << endl;
    for(int i:a) {
        cout << i << " ";
    }cout << endl;
    
    vector<int> last(a);//copy all the element of the a into last
    cout << "Print last" << endl;
    for(int i:last) {
        cout << i << " ";
    }cout << endl;

    cout << "Capacity --> " << v.capacity() << endl;

    v.push_back(1);
    cout << "Capacity --> " << v.capacity() << endl;
    v.push_back(2);
    cout << "Capacity --> " << v.capacity() << endl;
    v.push_back(3);
    cout << "Capacity --> " << v.capacity() << endl;
    cout << "size --> " << v.size() << endl;

    cout << "Element at 2nd Index --> " << v.at(1) << endl;

    cout << "Front --> " << v.front() << endl; 
    cout << "Back -->" << v.back() << endl;

    cout << "Before POP" << endl;
    for(int i:v) {
        cout << i << " ";
    }cout << endl;
    
    v.pop_back();

    cout << "After POP" << endl;
    for(int i:v) {
        cout << i << " ";
    }cout << endl;

    cout << "Before clear size --> " << v.size() << endl;
    v.clear();
    cout << "After clear size --> " << v.size() << endl;

    vector<int> arr;
    arr.push_back(1);
    arr.push_back(2);
    arr.push_back(2);
    arr.push_back(1);
    arr.push_back(1);
    arr.push_back(3);
    for(int i:arr) {
        cout << i << " ";
    }cout << endl;
    sort(arr.begin(), arr.end());
    for(int i:arr) {
        cout << i << " ";
    }cout << endl;

}


class Solution {
  private:
    vector<int> getFirstMin(vector<int> &arr) {
        vector<int> ans;
        int min = INT_MAX;
        for(int i = 0; i < arr.size(); i++) {
            if(arr[i] < min) {
                min = arr[i];
            }
        }
        
        for(int i = 0; i < arr.size(); i++) {
            if(arr[i] == min+1){
                ans.push_back(min);
                ans.push_back(arr[i]);
                return ans;
            }
        }
        
        ans.push_back(-1)
        
        return ans;
        
    }
  
  public:
    vector<int> minAnd2ndMin(vector<int> &arr) {
        return getFirstMin(arr);
};