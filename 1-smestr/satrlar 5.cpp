#include<iostream>
#include<string.h>
using namespace std;
int main(){
	string a,s="";
	getline(cin,a);
	for (int i=0; i<a.length(); i++)
	{
		if(a[i]!=' ')
		{
			s+=a[i];
		}
		else
		{
			cout<<s<<" "<<s.length()<<endl;
			s="";
		}
	}
	cout<<s<<" "<<s.length();
}
