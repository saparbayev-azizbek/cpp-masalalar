#include<iostream>
#include<math.h>
using namespace std;
int main(){
  int n,c,b;
  cin>>n;
  int a[n+1];
  for (int i=1; i<=n; i++){
    cin>>a[i];
  }
  int min=a[1];
  for (int i=1; i<=n; i++){
    if(min>a[i]){
     min=a[i];
    }
  }
   cin>>c>>b;
    for (int j=c; j<=b; j++){
      printf("%.1f",1.0*a[j]/min);
      cout<<" ";
    }
 for (int k=b+1; k<=n; k++){
    printf("%.1f",1.0*a[k]);
    cout<<" ";
  }
}
