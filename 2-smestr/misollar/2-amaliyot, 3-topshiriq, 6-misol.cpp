#include<iostream>
#include<math.h>
#include<vector>
using namespace std;
vector <int> v1;
void summa (int m)
{
	int s=0;
	cout<<endl<<"Vektorning "<<m<<" - indeksdan keyingi elementlari yig`indisi  :\n";
	for (int i=m; i<v1.size(); i++)
	{
		s+=v1.at(i);
	}
	cout<<s;
}
int main()
{
	int n,a;
	cout<<"Nechta element kitritmoqchisiz? N = ";
	cin>>n;
	for (int i=0; i<n; i++)
	{
		cout<<i+1<<"-element : ";
		cin>>a;
		v1.push_back(a);
	}
	cout<<endl<<"M indeksni kiriting : ";
	int m;
	cin>>m;
	summa(m);
}
