#include <iostream>
#include<array>
using namespace std;

int main(){
    int basic[3] = {1,2,3};//static he

    array<int, 4> a = {1,2,3,4};//static he

    int size = a.size();

    for(int i=0; i<size; i++) {
        cout << a[i] << endl;
    }

    cout << "Element at second index -->" << a.at(2) << endl;
    cout << "Empty or not --> " << a.empty() << endl;

    cout << "First Element--> " << a.front() << endl;
    cout << "Last Element --> " << a.back() << endl;
}