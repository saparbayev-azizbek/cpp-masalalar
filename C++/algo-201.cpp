#include<iostream>
using namespace std;
bool tub(int n)
{
	bool a = true;
	if(n==2 or n==3) a=true;
	for (int i=2; i*i<=n; i++)
	{
		if (n%i==0) a = false;
	}
	return a;
}
int main()
{
	int n;
	cin>>n;
	for (int i=2; i<=n; i++)
	{
		bool d = tub(i);
		if (d==1) cout<<i<<" ";
	}
}
