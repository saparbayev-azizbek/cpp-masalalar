#include<iostream>
#include<set>
using namespace std;
int main()
{
	int n,m,k;
	cin>>n;
	int n1[n+1];
	multiset<int> myset;
	multiset<int>::iterator it;
	for (int i=0; i<n; i++)
	{
		cin>>n1[i];
		myset.insert(n1[i]);
	}
	cin>>m;
	int m1[m+1];
	for (int i=0; i<n; i++)
	{
		cin>>m1[i];
		myset.insert(m1[i]);
	}
	cin>>k;
	int k1[k+1];
	for (int i=0; i<n; i++)
	{
		cin>>k1[i];
		myset.insert(k1[i]);
	}
	for (it=myset.begin(); it!=myset.end(); ++it)
	{
		cout<<*it<<" ";
	}
}
