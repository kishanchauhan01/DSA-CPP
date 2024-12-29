#include <iostream>
using namespace std;

// int main()
// {

//     int n;
//     cin >> n;
//     int i = 1;

//     while (i <= n)
//     {
//         int j = 1, space = 1;
//         while (space < i)
//         {
//             cout << " ";
//             space++;
//         }
//         while (j <= n - i + 1)
//         {
//             cout << "*";
//             j++;
//         }
//         cout << endl;
//         i++;
//     }
// }

int main() {
    int n;
    cin >> n;
    int space = 0;
    int i = 1;
    
    while(i<=n) {
        int j = 1;
        while(j<=n) {
            if(j <= space) {
                cout << " ";
            }
            else {
                cout << j;
            }
            j++;
        }
        cout << endl;
        space++;
        i++;
    }
}