#include<iostream>
using namespace std;
double f(double x){
	return x*x*x-3*x*x-24*x-8;
}
int main(){
	double a,b,e;
	do{
	cout<<"[a,b] oraliqni kiriting: ";
	cin>>a>>b;
	}while(f(a)*f(b)>0);
	cout<<"e = ";
	cin>>e;
	while(b-a>e){
		double c = (a+b)/2;
		if(f(a)*f(c)<0) 
			b = c;
			else a = c;
	}
	double x = (a+b)/2;
	cout<<"x = "<<x<<endl;
	cout<<"f("<<x<<") = ";
	printf("%.2f",f(x));
}
