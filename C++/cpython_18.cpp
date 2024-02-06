#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	for (int i = 1; i<=n; i++)
	{
		if (i%3==1)	cout<<i<<" ";
		else if(i%3==2) cout<<i<<" "<<i<<" ";
		else cout<<i<<" "<<i<<" "<<i<<" ";
	}
}
