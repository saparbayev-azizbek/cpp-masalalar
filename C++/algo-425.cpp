#include<iostream>
using namespace std;
int main()
{
	int n,c=0;
	cin>>n;
	int a[n+1];
	cin>>a[0];
	int max = a[0];
	for (int i=1; i<n; i++)
	{
		cin>>a[i];
		if (a[i]>max) max = a[i];
	}
	for (int i=0; i<n; i++)
	{
		if (a[i]==max) c++;
	}
	cout<<max<<" "<<c;
}
