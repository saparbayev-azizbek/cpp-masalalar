#include<iostream>
#include<set>
using namespace std;
int main()
{
	int n,s=1;
	cin>>n;
	multiset<int> myset;
	for (int i = 0; i<n; i++)
	{
		int a;
		cin>>a;
		myset.insert(a);
	}
	multiset<int>:: iterator it;
	for (it=myset.begin(); it!=myset.end(); ++it) 
	{
		int c;
		c++;
		if (c>=(n-2)) s *= *it;
	}
	cout<<s;
}
