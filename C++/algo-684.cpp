#include<iostream>
using namespace std;
int main()
{
	long long n,c=0;
	cin>>n;
	while(n!=1)
	{
		if (n%2==0)
		{
			n /= 2;
			c++;
		}
		else if (n%2==1)
		{
			n = (n+1)/2;
			c++;
		}
	}
	cout<<c;
}
