#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	int L,R;
	string a,s="";
	getline(cin,a);
	cin>>L>>R;
		if(L>R)
		{
			for (int i=L; i<=R; i++)
			{
				s+=a[i];
				cout<<s;
			}
		}
		if(L<R)
		{
			for (int i=R; i>=L; i--)
			{
				s+=a[i];
				cout<<s;
			}
		}
}
