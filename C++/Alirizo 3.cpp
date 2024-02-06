#include<iostream>
#include<vector>
using namespace std;
int main()
{
	vector <int> v;
	int n,a,s=0;
	cin>>n;
	for (int i=0; i<n; i++)
	{
		cin>>a;
		v.push_back(a);
		if (v.at(i)%2==0)
		s+=v.at(i);
	}
	cout<<s;
}
