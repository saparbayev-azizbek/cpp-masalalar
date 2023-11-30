#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;//elementlar sonini kiritish
    int a[n+1];
    for(int i = 1; i<=n; i++){
     //cout<<"a["<<i<<"] = ";
        cin>>a[i];//massivni kiritish
    }
    int sum = 0;
    for(int i = 1; i<=n;i++ ){
        sum+=a[i];
    }
    double d = sum*1.0/n;
    //cout<<d;
    int sum1 = 0, n1 = 0;
    for(int i = 1;i<=n; i++){
     if(a[i]<d){
         sum1+=a[i];
         n1++;
     }
    }
    double d1 = sum1*1.0/n1;
    printf("%.2f",d1);
}
