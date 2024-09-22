#include<iostream>
#include<math.h>
using namespace std;

int FirstCompliment(int n){
    int mask = 0;
    int temp = ~n;
    while(n!=0){
        // int bit = n & 1;
        mask = (mask << 1) | 1;
        n = n >> 1;
    }
    return temp & mask;
}

int DectoBin (int n){
    int ans=0;
    for(int i=0 ;n!=0; i++){
        int bit = n & 1;
        ans = (bit * pow(10,i)) + ans;
        n = n >> 1; 
    }
 
    // int i=0;
    // while(i!=0){
    //     int bit = n & 1;
    //     ans = (bit * pow(10,i)) + ans;
    //     n = n >> 1; 
    //     i++;
    // } 

    return ans;
}

int main(){
    int n,n2;
    cout << "Enter Negative Decimal Number : ";
    cin >> n;
    if(n<0){
        n2=-n;
    } 
    int TwosCompliment = FirstCompliment(n2) + 1;
    cout << "2's Compliment of "<< n << " in Binary is  ===>  "  << DectoBin(TwosCompliment); 
}