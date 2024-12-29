#include<iostream>
using namespace std;

// int main(){
//     int n;
//     cin >> n;

//     int i = 1;
//     while(i <= n)
//     {
//         int space = n - i;
//         while (space)
//         {
//             cout << " ";
//             space--;
//         }

//         int j = 1;
//         while(j <= i)
//         {
//             cout << "*";
//             j++;
//         }
//         cout << endl;
//         i++;        
//     }    
// }

int main() { //my logic
    int n, num = 1;
    cin >> n;
    int space = n-1;
    int i = 1;
    while(i<=n) {
        int j = 1;
        while(j<=n) {
            if(j<=space) {
                cout << "  ";
            }
            else {
                cout << num << " ";
                num++;
            }
            j++;
        }
        cout << endl;
        space--;
        i++;
    }
}