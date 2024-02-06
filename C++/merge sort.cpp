#include <iostream>
#include <math.h>
#include <stdio.h>
#include <algorithm>
using namespace std;
int a[100000], b[100000];
void mergesort(int L, int R) {
     if (L >= R)
          return;
     else {
          int m = (L+R) / 2;
          mergesort(L, m);
          mergesort(m+1, R);
          //Birlashtirish yoziladi
     }
      	  for (int i = 0; i < R; i++)
            cout<<a[i]<<" ";
}
int main() {
      int n;
      cin>>n;
      for (int i = 0; i < n; i++)
           cin>>a[i];
      mergesort(0, n-1);
      return 0;
}

