#include<iostream>
#include<map>
using namespace std;
int main()
{
	int n,c=0,c3=0,c10=0;
	cin>>n;
	
	map <int, int> mymap;
	map<int, int>::iterator it;
	int a[n+1];
	for (int i = 0; i<n; i++)
	{
		cin>>a[i];
		if (a[i]==1) mymap.insert({1,i});
		if (a[i]==2)
		{
			c++;
			if (c==2) mymap.insert({2,i});
		}
		if (a[i]==3)
		{
			c3++;
			if (c3==3) mymap.insert({3,i});
		}
	}
	for (it=mymap.begin(); it!=mymap.end(); it++)
	{
		cout<<it->second+1<<" ";
		c10++;
	}
	for (int i=c10+1; i<=3; i++)
	{
		cout<<"-1"<<" ";
	}
}
