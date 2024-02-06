#include<iostream>
#include<map>
using namespace std;
int main()
{
	int n,c=0,c3=0,c4=0,c5=0,c6=0,c7=0,c8=0,c9=0,c10=0;
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
		if (a[i]==4)
		{
			c4++;
			if (c4==4) mymap.insert({4,i});
		}
		if (a[i]==5)
		{
			c5++;
			if (c5==5) mymap.insert({5,i});
		}
		if (a[i]==6)
		{
			c6++;
			if (c6==6) mymap.insert({6,i});
		}
		if (a[i]==7)
		{
			c7++;
			if (c7==7) mymap.insert({7,i});
		}
		if (a[i]==8)
		{
			c8++;
			if (c8==8)mymap.insert({8,i});
		}
		if (a[i]==9)
		{
			c9++;
			if (c9==9) mymap.insert({9,i});
		}
	}
	for (it=mymap.begin(); it!=mymap.end(); it++)
	{
		cout<<it->second+1<<" ";
		c10++;
	}
	for (int i=c10+1; i<=9; i++)
	{
		cout<<"-1"<<" ";
	}
}
