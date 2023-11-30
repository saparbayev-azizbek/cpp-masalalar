#include<iostream>
#include<math.h>
using namespace std;
int main (){
	long long n;
	cin>>n;
	long long a[n];
	for(int i=0; i<n; i++){
		cin>>a[i];
	}
	long long max=a[0];
	for(int j=1; j<n; j++){
		if(a[j]>max){
			max=a[j];
		}	
	}
	for(int i=0; i<n; i++){
		printf("%.2f",a[i]/max*1.0);
		cout<<" ";
	}
}

