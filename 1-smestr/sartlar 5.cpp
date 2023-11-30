#include<iostream>
#include<math.h>
#include<string.h>
#include<cstdio>
using namespace std;
int main()
{
	string	a,s="";
	int  n=0;
	getline(cin,a);
	for (int i=0; i<a.length();i++){
			if(s[i]=='A' or s[i]=='a' or s[i]=='O' or s[i]=='o' or s[i]=='U' or s[i]=='u' or s[i]=='I' or s[i]=='i' or s[i]=='E' or s[i]=='e')
			{
				n++;
			}
	}
	cout<<n;
	} 
