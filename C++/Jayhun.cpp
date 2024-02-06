#include<iostream>
#include<set>
using namespace std;
int main()
{
	multiset<int> s1,s2,s3,s4;
	int n1,n2,n3,a1,a2,a3,count;
	cout<<"Birinchi to'plam :\n";
	cin>>n1;
	for(int i=0; i<n1; i++)
	{
		cin>>a1;
		s1.insert(a1);
	}
	cout<<"Ikkinchi to'plam :\n";
	cin>>n2;
	for(int i=0; i<n2; i++)
	{
		cin>>a2;
		s2.insert(a2);
		s4.insert(a2);
	}
	cout<<"Uchinchi to'plam :\n";
	cin>>n3;
	for(int i=0; i<n3; i++)
	{
		cin>>a3;
		s3.insert(a3);
		s4.insert(a3);
	}
	multiset<int>::iterator it,it1;
	for(it=s1.begin(); it!=s1.end(); ++it)
	{
		for(it1=s4.begin(); it1!=s4.end(); ++it1)
		{
			if (*it==*it1)
			count++;
		}
	}
	cout<<"Element soni : "<<count;
}
