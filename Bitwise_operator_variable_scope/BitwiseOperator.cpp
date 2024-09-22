#include <iostream>
using namespace std;

int main()
{
    int a = 4;
    int b = 6;

    cout << "a&b " << (a & b) << endl;
    cout << "a|b " << (a | b) << endl;
    cout << "~a " << (~a) << endl;
    cout << "a^b " << (a ^ b) << endl;

    int c, d = 1;
    c = 10;
    if(++a)
        cout << c;
    else
        cout << ++d;
    
    for (;;){}
    cout << "hi";

}