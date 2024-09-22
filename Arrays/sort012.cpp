#include <bits/stdc++.h> 
void sort012(int *arr, int n)
{
   int l = 0;
   int h = n-1;

   for(int i=0; i<=n && i<=h;) {
      //current elemnet is 0
      if(arr[i] == 0) {
         swap(arr[l], arr[i]);
         l++;
         i++;
      }
      //curren element is 2
      else if(arr[i]==2) {
         swap(arr[i], arr[h]);
         h--;
      }
      else {
         i++;
      }
   }
}