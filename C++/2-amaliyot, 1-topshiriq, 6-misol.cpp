#include<iostream>
#include<vector>
using namespace std;

void kvadrati (vector <int> v1)
{
	int s=0;
	cout<<endl<<"Vektor elementlari kvadratlari yig`indisi :\n";
	for (int i=0; i<v1.size(); i++)
	{
		s+=v1.at(i)*v1.at(i);
	}
	cout<<s;
}
int main()
{
	vector <int> v1;
	int n,a;
	cout<<"Nechta element kitritmoqchisiz? N = ";
	cin>>n;
	for (int i=0; i<n; i++)
	{
		cout<<i+1<<"-element : ";
		cin>>a;
		v1.push_back(a);
	}
	kvadrati(v1);
}
