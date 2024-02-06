#include<iostream>
using namespace std;
bool tub(int n)
{
	bool m = true;
	for(int i=2; i*i<=n; i++)
	{
		if (n%i==0) m = false;
	}
	return m;
}
int main()
{
	int n;
	cin>>n;
	bool m = tub(n);
	if (n==2 or n==3) cout<<"Yes";
	else if (n==1) cout<<"No";
	else if (m==1) cout<<"Yes";
	else cout<<"No"; 
}
