#include<iostream>
#include<vector>
using namespace std;
int main()
{
	vector <double> v;
	int n;
	double a;
	cin>>n;
	cin>>a;
	v.push_back(a);
	double max=v.at(0);
	for (int i=1; i<n; i++)
	{
		cin>>a;
		v.push_back(a);
		if (max<v.at(i))
			max=v.at(i);
	}
	for (int i=0; i<n; i++)
	{
		cout<<v.at(i)/max<<" ";
	}
}
