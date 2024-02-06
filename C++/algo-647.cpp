#include<iostream>
using namespace std;
int main()
{
	int s,n;
	cin>>s>>n;
	int q = s%n;
	int b = s/n;
	for (int i = 1; i<=n; i++)
	{
		if (i>=n-q+1)
		{
			if (i==n) cout<<b+1;
			else cout<<b+1<<"+";
		}
		else
		{
			if (i==n) cout<<b;
			else cout<<b<<"+";
		}
	}
}
