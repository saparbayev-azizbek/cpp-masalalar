#include<iostream>
#include<math.h>
using namespace std;
int main(){
	double a,b;
	cin>>a>>b;
	double min;
	if (a>b) min=b;
	else{ 
	min=a;
	}
	double max;
	if (a>b) max=a;
	else{ 
	max=b;
	}
	double v;
	if (a*b>max) v=max;
	else{
		v=a*b;
	}
	double s;
	if ((min+v)>3.14) s=3.14;
	else{
		s=min+v;
	}
	printf("%.2f",min);
	cout<<" ";
	printf("%.2f",v);
	cout<<" ";
	printf("%.2f",s);
}
