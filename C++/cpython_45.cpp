#include<iostream>
#include<vector>
using namespace std;
int main()
{
	int n,c=0,c3=0,c4=0,c5=0,c6=0,c7=0,c8=0,c9=0;
	cin>>n;
	vector <int> myset;
	int a[n+1];
	for (int i = 0; i<n; i++)
	{
		cin>>a[i];
		if (a[i]==1) myset.push_back(i+1);
		if (a[i]==2)
		{
			c++;
			if (c==2) myset.push_back(i+1);
		}
		if (a[i]==3)
		{
			c3++;
			if (c3==3) myset.push_back(i+1);
		}
		if (a[i]==4)
		{
			c4++;
			if (c4==4) myset.push_back(i+1);
		}
		if (a[i]==5)
		{
			c5++;
			if (c5==5) myset.push_back(i+1);
		}
		if (a[i]==6)
		{
			c6++;
			if (c6==6) myset.push_back(i+1);
		}
		if (a[i]==7)
		{
			c7++;
			if (c7==7) myset.push_back(i+1);
		}
		if (a[i]==8)
		{
			c8++;
			if (c8==8) myset.push_back(i+1);
		}
		if (a[i]==9)
		{
			c9++;
			if (c9==9) myset.push_back(i+1);
		}
	}
	for (int i=0; i<myset.size(); i++)
	{
		cout<<myset[i]<<" ";
	}
	for (int i=myset.size(); i<9; i++)
	{
		cout<<"-1"<<" ";
	}
}
