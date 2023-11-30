#include<iostream>
#include<math.h>
using namespace std;
int main(){
	int n,s=0;
	cin>>n;
	int a[n+1];
	for(int i=1; i<=n; i++){
		cin>>a[i];
	}
	for(int j=2; j<=n; j+=2){
		s+=a[j];
	}
	for(int i=1; i<=n; i++){
		if(a[i]>0 and a[i]%2==1){
				printf("%.2f",1.0*a[i]/s);
				cout<<" ";
		}
		else{
			printf("%.2f",1.*a[i]);
			cout<<" ";
		}
}
}
