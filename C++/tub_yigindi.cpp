#include<iostream>
#include<math.h>
using namespace std;
bool tub(int x)
{
	int m = 0;
	for (int i=1; i<=sqrt(x); i++)
	{
		if (x%i==0) m+=2;
	}
	if (m>2) return false;
	 return true;
}
int main()
{
	int n;
	long long s = 0;
	cin>>n;
	for (int i = 2; i<=n; i++)
	{
		if (tub(i)==1) s += i;
	}
	cout<<s;
}
