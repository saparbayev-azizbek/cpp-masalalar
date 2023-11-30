#include<iostream>
using namespace std;
int main()
{
	int n,max,k;
	cin>>n;
	int m[n+5];
	cin>>m[1];
	max=m[1];
	for(int i=2;i<=n;i++)
	{
		cin>>m[i];
		if(max<m[i])
		{
			max=m[i];
		}
	}
	cin>>k;
	m[k];
	for(int i=1;i<=n;i++)
	{
		if(m[i]==max)
		{
			m[i]=m[k];
		}
	}
	m[k]=max;
	for(int i=1; i<=n; i++){
		cout<<m[i]<<" ";
	}
	return 0;
}
