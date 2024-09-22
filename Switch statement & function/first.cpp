#include <iostream>
using namespace std;

int main()
{

    int num = 1;
    char ch = '1';
    cout << "hi" << endl;
    cout << endl;

    switch (ch)
    {
    case 1:
        cout << "First" << endl;
        break;

    case '1':
        switch (num*2)
        {
        case 2:
            cout << "value of num is " << num << endl;
            break;
        }
        break;

    default:
        cout << "hi" << endl;
    }
}