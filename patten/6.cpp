#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    int i = 1;
    char str = 'A';
    while (i <= n)
    {
        int j = 1;
        while (j <= n)
        {
            cout << str << " ";
            str = str + 1;
            j = j + 1;
        }
        cout << endl;
        i = i + 1;        
    }
    
}