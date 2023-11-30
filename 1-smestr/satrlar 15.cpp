#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	int t=0;
	string a,s="",f[300];
	getline(cin,a);
	a=a+" ";
	int max=0;
	string h;
	for (int i=0; i<a.size(); i++)
	{
		if(a[i]!=' ')
		 {
		 	s+=a[i];
		 }
		 else
		 {
		 	if(s.size()>max)
		 	{
		 		max=s.size();
		 		h=s;
			}
		 	s="";
		 }
	}
	cout<<h;
}    
