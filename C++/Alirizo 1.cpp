#include<iostream>
#include<vector>
#include<math.h>
using namespace std;
int main()
{
	vector <int> v;
	int n,a;
	cin>>n;
	for (int i=0; i<n; i++)
	{
		cin>>a;
		v.push_back(a);
	}
	int p=1;
	for (int i=0; i<n; i++)
	{
		if (v.at(i)%2==0 or v.at(i)%5==0)
		p*=v.at(i);
	}
	double s=sin(p);
	cout<<s;
}
