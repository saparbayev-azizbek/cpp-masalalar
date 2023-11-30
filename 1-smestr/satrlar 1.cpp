#include<iostream>
#include<string.h>
#include<cstdio>
using namespace std;
int main()
{
	string	a,s="",b[100];
	int  n=0;
	getline(cin,a);
	a=a+" ";
	for (int i=0; i<a.length();i++){
		if(a[i]!=' ')
		{
			s+=a[i];
		}
		else
		{
			if((s[i]=='I' or s[i]=='i') and (s[i+1]=='N' or s[i+1]=='n') and (s[i+2]=='F' or s[i+2]=='f') and (s[i+3]=='O' or s[i+3]=='o'))
			{
				cout<<s<<" ";
			}
			s="";
		}
	}
/*	for (int i=1; i<=n; i++){
		cout<<s<<" ";
	}*/
	return 0;
	} 

