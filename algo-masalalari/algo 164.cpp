#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	string a;
	getline(cin,a);
	int L,R;
	cin>>L>>R;
	if(L<R)
	{
		for(int i=L-1; i<R; i++)
		{
			cout<<a[i];
		}
	}
	if(L>R)
	{
		for(int i=L-1; i>=R-1; i--)
		{
			cout<<a[i];
		}
	}
	if (L==R)
	{
		cout<<a[L-1];
	}
}    

