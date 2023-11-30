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
	int d=0, m=0;
	for (int i=1; i<=n; i++){
		if(a[i]==k) d++;
		if(a[i]==l) m++;
	}
	long long h=k*d*m*l;
	if(d==0 and m!=0) cout<<l*m;
	else if(m==0 and d!=0) cout<<k*d;
	else {
	cout<<h;
}
}
