#include <iostream>
#include<math.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    double a[n];
    for (int i=0; i<n; i++){
    	cin>>a[i];
	}
	int max=a[0];
	for (int i=1; i<n; i++){
		if (a[i]>max){
			max=a[i];
		}
	}
	for (int i=0; i<n; i++){
		printf("%.2f",a[i]/max);
		cout<<" ";
	}
}
