include<iostream>
#include<math.h>
using namespace std;
int main (){
	int M,n;
	cin>>n;
	double a[n+1];
	for( int i=0; i<n; i++){
		cin>>a[i];
	}
	cin>>M;
	long long p=1;
	for (int i=0; i<n; i++){
		if(a[i]>M){
			p*=a[i];
		}
	}
	printf("%.2f",log(p));
} 
