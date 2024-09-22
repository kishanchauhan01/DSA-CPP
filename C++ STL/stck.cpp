#include <iostream>
#include<stack>
using namespace std;

int main(){
    stack<string> s;

    s.push("Kishan");
    s.push("Chauhan");
    s.push("Hello");

    cout << "Top Element --> " << s.top() << endl;

    s.pop();
    cout << "Top Element --> " << s.top() << endl;

    cout << "Size of stack" << s.size() << endl;

    cout << "Size of stack" << s.empty() << endl;

}