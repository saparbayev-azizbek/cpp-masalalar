/*
	X to'plami(multiset) ning o'rta arifmetik
	va o'rta geometrik qiymatlarini aniqlang. 
*/
#include<iostream>
#include<set>
#include<math.h>
using namespace std;
int main()
{
	multiset <int> s1;
	multiset <int> :: iterator it;
	
	int n,a;
	double s=0,p=1;
	do
	{
	cout<<"Elementlar soni : ";
	cin>>n;
	for (int i=1; i<=n; i++)
	{
		cout<<i<<" - element : ";
		cin>>a;
		s+=a;
		p*=a;
		s1.insert(a);
	}
	cout<<"To`plamning o`rta arifmetik qiymati :"<<endl<<1.0*s/n<<endl;
	cout<<"To`plamning o`rta geometrik qiymati :"<<endl<<pow(p,1.0/n)<<endl<<endl;
	} while(true);
}
