#include<iostream>
#include<math.h>
using namespace std;
int main(){
	int n,k;
	cin>>n;
	int a[n+1],b[n+1];
	for (int i=1; i<=n; i++){
		cin>>a[i];
	}
	cin>>k;
	int max=a[1],j=0;
	for (int j=1; j<=n; j++){
		if(a[j]>max){
			max=a[j];
			j++;
		}
	}
	cout<<j<<endl;
	for (int i=1; i<=n; i++){
	//	if(i==)
		b[i]=a[i];
	}
	for (int i=1; i<=n; i++){
	cout<<b[i]<<" ";
}
}
