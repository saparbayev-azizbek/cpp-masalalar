#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	int t=0,k;
	string a,s="",f[300];
	getline(cin,a);
	cin>>k;
	a=a+" ";
	for (int i=0; i<a.size(); i++)
	{
		if(a[i]!=' ')
		 {
		 	s+=a[i];
		 }
		 else
		 {
		 	t++;
		 	f[t]=s;
		 	s="";
		 }
	}
	for (int i=1; i<=t; i++)
	{
		if(i==k)
		{
			f[i]="TATU";
		}
		cout<<f[i]<<" ";
	}
}
