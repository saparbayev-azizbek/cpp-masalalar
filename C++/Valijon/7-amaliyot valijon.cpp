/*
a)	Yangi konteynerlar hosil qiling, uni standart funksiyalar yordamida elementlar bilan to'lating 
search funksiyasi yordamida amallar bajaring;
b)	Iteratorlardan foydalanib multimap konteyneri ustida amallar bajaring;
*/
#include<iostream>
#include<map>
#include<fstream>
using namespace std;
int main()
{
	multimap<int, string> m,m2;
	ifstream fin("standart_algoritmlar.txt");
	int n;
	fin>>n;
	for (int i=1; i<=n; i++)
		{
			string nomi, rangi, turi;
			int narxi;
			fin>>nomi>>rangi>>turi>>narxi;
			string s=nomi+" "+rangi+" "+turi;
			m.insert(pair<int, string> (narxi, s));
		}
		multimap<int, string>::iterator it;
		int t;
		cout<<"Meva narxini kiriting : ";
		cin>>t;
		for (it=m.begin(); it!=m.end(); it++)
		{
			if (it->first==t)
			{
				string k=it->second;
				m2.insert(pair<int, string> (t,k)); 
			}
		}
		if (m2.size()>0)
		{
			for (it=m2.begin(); it!=m2.end(); it++)
			{
				cout<<it->first<<" "<<it->second;
				cout<<endl;
			}
		}
		else
		cout<<"So'rov natijasi mavjud emas";
}
