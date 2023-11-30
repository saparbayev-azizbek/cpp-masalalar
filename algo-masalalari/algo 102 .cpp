#include<iostream>
#include<math.h>
using namespace std;
int main(){
	int n,c,b;
	cin>>n;
	int a[n];
	for (int i=0; i<n; i++){
		cin>>a[i];
	}
	cin>>c>>b;
	int min=a[0];
	for (int i=0; i<n; i++){
		if(min>a[i]){
		 min=a[i];
		}
	}
	for (int i=0; i<n; i++){
		for (int i=c; i<=b; i++){
			printf("%.1f",a[i]/min*1.0);
			cout<<" ";
		}
	}
	for (int i=b+1; i<n; i++){
		printf("%.1f",a[i]);
		cout<<" ";
	}
}
		
		
		
		
		
		
		
	}
}
