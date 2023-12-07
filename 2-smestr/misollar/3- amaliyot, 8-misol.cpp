#include <iostream>
#include <list>
using namespace std;
void print (list <int> m)
{
	double s=0,k=0;
	while (!m.empty())
	{
		if (m.front()<0)
		{
			s+=m.front();
			k++;
		}
		m.pop_front();
	}
	if (k>0)
		cout<<"Manfiy elemetlari o`rta arifmetigi : "<<1.0*s/k;
	else 
	{
		cout<<"Manfiy elementi mavjud emas";
	}
}
int main()
{
	list <int> h;
	int n,a;
	cout<<"N : ";
	cin>>n;
	for (int i=0; i<n; i++)
	{
		cout<<i+1<<" - element : ";
		cin>>a;
		h.push_back(a);
	}
	print(h);
}
