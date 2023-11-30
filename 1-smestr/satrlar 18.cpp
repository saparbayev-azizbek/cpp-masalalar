#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int a;
	int n=0,m=0;
	cin>>a;
	int s[a+1];
	for (int i=1; i<=a; i++)
	{
		cin>>s[i];
		if (s[i]>0)
		{
			n++;
		}
		if (s[i]<0)
		{
			m++;
		}
	}
	cout<<n*m;
}
