#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int count = 0;
	if (n>0)
	{
		for (int i = 1; i*i<=n; i++)
		{
			if (i*i==n) count++;
			else if (n%i==0)
			count ++;	
		}
		cout<<count*2;
	}
	if (n<0)
	{
		bool t = false;
		int k = n*(-1);
		for (int i = 1; i*i<=k; i++)
		{
			if (i*i==k) t = true;
			if (k%i==0)
			count ++;	
		}
		if (t == 1)
			cout<<count*2-1;
		else cout<<count*2;
	}
}
