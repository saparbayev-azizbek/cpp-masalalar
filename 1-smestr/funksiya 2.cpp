#include<iostream>
#include<math.h>
using namespace std;
double algo(int n)
{
	long long p=1;
	for (int i=1; i<=n; i++)
	{
		p=p*i;
	}
	return p;
}
double t(double x)
{
	double s1=0,s2=0;
	for (int k=0; k<=10; k++)
	{
		s1+=pow(x,2*k+1)/algo(2*k+1);
		s2+=pow(x,2*k)/algo(2*k);
	}
	return s1/s2;
}
int main()
{
	double y;
	cin>>y;
	double S=(1.7*t(0.25)+2*t(y+1))/(6-t(y*y-1));
	printf("%.2f",S);
}
