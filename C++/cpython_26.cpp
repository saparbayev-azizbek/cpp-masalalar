#include<iostream>
using namespace std;
int main()
{
	int n,c=0;
	cin>>n;
	for (int i=5; i<=n; i += 5)
	{
		c++;
	}
	for (int i=12; i<=n; i += 12)
	{
		c++;
	}
	cout<<c;
}
