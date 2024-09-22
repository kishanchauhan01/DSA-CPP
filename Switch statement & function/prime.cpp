#include <iostream>
using namespace std;

// 0 for nonprime
// 1 for prime
//My logic

/*bool isPrime(int num)
{
    int i = 2;
    while (i < num)
    {
        int ans = num % i;
        if (ans == 0)
        {
            break;
        }
        i++;
    }
    if (num == i)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
*/

bool isPrime(int num){

    for(int i = 2; i<num; i++){
        if(num % i == 0){
            return 0;
        }
    }
    return 1;
}

int main()
{
    int x;
    cin >> x;

    if(isPrime(x)){
        cout << x << " is prime number" << endl;
    }
    else{
        cout << x << " is not prime a prime number" << endl;
    }
}