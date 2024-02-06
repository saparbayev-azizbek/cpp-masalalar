#include<iostream>
using namespace std;
int main()
{
	int n,c=0;
	cin>>n;
	int a[n+1];
	cin>>a[0]>>a[1];
	for (int i=2; i<n; i++)
	{
		cin>>a[i];
		if (a[i]==a[i-1]+a[i-2]) c++;
	}
	cout<<c;
}
