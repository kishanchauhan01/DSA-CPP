//Deque stands for Double Ended Queues. They are not allocated contiguous memory locations. Unlike queues, they allow both insertion and deletion at both ends. Although vector also allows us for insertion and deletion at both ends, these operations on deques are more efficient.
//Deque is a data structure that inherits the properties of both queues and stacks. Additionally, the implementation of this data structure requires constant time, i.e., time complexity = O(1). This means you can use deque to your advantage to implement both the queue and stack.
#include <iostream>
#include<deque>
using namespace std;

int main(){
    
    deque<int> d;

    d.push_back(1);
    d.push_back(2);
    d.push_back(3);

    for(int i:d) {
        cout << i << " ";
    }cout << endl;

    // d.pop_back();

    // for(int i:d) {
    //     cout << i << " ";
    // }cout << endl;

    // d.pop_front();

    // for(int i:d) {
    //     cout << i << " ";
    // }cout << endl;

    cout << "Print first element --> " << d.at(1) << endl;

    cout << "Front --> " << d.front() << endl;
    cout << "back --> " << d.back() << endl;

    cout << "Empty or not --> " << d.empty() << endl;

    cout << "Before clear --> " << d.size() << endl;
    d.erase(d.begin(), d.begin()+1);
    cout << "After clear --> " << d.size() << endl;

    for(int i:d) {
        cout << i << " ";
    }cout << endl;
}