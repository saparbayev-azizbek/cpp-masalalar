#include<iostream>
#include<math.h>
using namespace std;
int main(){
	int n,k,l;
	cin>>n;
	int a[n+1];
	for (int i=1; i<=n; i++){
		cin>>a[i];
	}
	cin>>k>>l;
	long long s=0;
	for (int i=k; i<=l; i++){
		s+=a[i]*a[i]*a[i];
	}
	cout<<s;
}
