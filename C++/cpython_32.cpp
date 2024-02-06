#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n+1];
	for (int i = 1; i<=n; i++)
	{
		cin>>a[i];
	}
	for (int i = 1; i<n; i++)
	{
		for (int j = i; j<=n; j++)
		{
			if(a[i]>a[j]) swap(a[i],a[j]);
		}
	}
	for (int i = n; i>=1; i--)
	{
		cout<<a[i]<<" ";
	}
}
