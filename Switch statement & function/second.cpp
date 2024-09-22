#include <iostream>
using namespace std;

int main()
{
    int a = 1;

    while (1)
    {
        switch (a)
        {
        case 1:
            cout << "hi" << endl;
            exit(1); //Remember, the function exit() never returns any value. It terminates the process and performs the regular cleanup for terminating programs.

        default:
            cout << "hey" << endl;
        }
    }
}