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
		for (int j=0; j<s.size(); j++)
		{
		if((s[j]=='I' or s[j]=='i') and (s[j+1]=='n' or s[j+1]=='N') and (s[j+2]=='f' or s[j+2]=='F') and (s[j+3]=='o' or s[j+3]=='O'))
			{
			cout<<s<<" ";
			}
		}
			s="";
		}
	}
	for (int i=0; i<s.length(); i++)
	{
		if((s[i]=='I' or s[i]=='i') and s[i+1]=='n' and s[i+2]=='f' and s[i+3]=='o')
		{
		cout<<s<<" ";
		}	
	}
		
} 
    
