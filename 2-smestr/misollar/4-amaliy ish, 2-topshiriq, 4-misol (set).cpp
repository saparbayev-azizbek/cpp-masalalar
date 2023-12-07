/*
	Berilgan float turidagi to'plam qiymatlarining butun(nuqtadan oldin)
qismi 2- to'plamga, kasr(nuqtadan keyin) qismi 3- to'plamga joylashtiruvchi
va ularni ekranga chiqaruvchi dastur tuzing. Ikkala to'plamdan ham bir 
xil qiymatli elementlar  o'chirilib Saralangan to'plam hosil qilinsin 
hamda uning qiymatlari ekranga chiqarilsin.
*/
#include<iostream>
#include<math.h>
#include<set>
using namespace std;
int kasr (float x)
{
	int s=0;
	if (x<0)
	{
		float k1=x-ceil(x);
		s=k1*10000;
		if (s%10!=0)
		s-=1;
	}
	else
	{
		float k=floor(x);
		s=(x-k)*10000;
		if (s%10!=0)
		s+=1;
	}
	while(s%10==0)
	{
		s=s/10;	
	}
	return s;
}
int main()
{
	multiset <float> m1;
	int n1;
	float a1;
	cout<<"To`plam elementlari sonini kiriting : ";
	cin>>n1;
	for (int i=1; i<=n1; i++)
	{
		cout<<i<<" - element : ";
		cin>>a1;
		m1.insert(a1);
	}
	set <float> s1,s2;
	set <float>::iterator it1;
	set <float>::iterator it2;
	// o`zlashtirish
	for (it1=m1.begin(); it1!=m1.end(); ++it1)
	{
		s1.insert(floor(*it1));
	}
	for (it2=m1.begin(); it2!=m1.end(); ++it2)
	{
		s2.insert(kasr(*it2));
	}
	// ekranga chiqarish
	cout<<"Butun qismlari ro`yhati :\n";
	for(it1=s1.begin(); it1!=s1.end(); ++it1)
	{
		if (*it1>=0)
		cout<<floor(*it1)<<" ";
		else
		cout<<ceil(*it1)+1<<" ";
	}
	cout<<"\nKasr qismlari ro`yhati :\n";
	for(it2=s2.begin(); it2!=s2.end(); ++it2)
	{
		cout<<*it2<<" ";
	}
}
