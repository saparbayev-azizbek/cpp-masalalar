/*
Kompyuterlar haqida (nomi, firmasi, xotirasi, yili va yadrosi) to'plam 
berilgan. Kompyuterlarni yadrosi va firmasi bo'yicha qidiruvchi hamda 
topilgan natijani faylga saqlashni taklif qiladigan dastur tuzing.
*/
#include<iostream>
#include<map>
#include<fstream>
using namespace std;
int main()
{
	multimap <int , string> m,m2;
	multimap <string,string> m3,m4;
	ifstream fin ("kompyuter.txt");
	int n,l;
	fin>>n;
	cout<<"Qaysi parametr bo`yicha qidirmoqchisiz?\nkompyuter yadrolari soni - 1\nKompyuter firmasi - 2\n";
	cin>>l;
	if (l==1)
	{
		for (int i=1; i<=n; i++)
		{
			string nomi, firma,xotira,yil;
			int yadro;
			fin>>nomi>>firma>>xotira>>yil>>yadro;
			string s=nomi+" "+firma+" "+xotira+" "+yil;
			m.insert({yadro, s});
		}
		multimap<int, string>::iterator it;
		int t;
		cout<<"Kompyuter yadrosini kiriting : "<<endl;
		cin>>t;
		for (it=m.begin(); it!=m.end(); it++)
		{
			if (it->first==t)
			{
				string k=it->second;
				m2.insert({t,k}); 
			}
		}
		if (m2.size()>0)
		{
			cout<<"So`rov natijasi mavjud. Ushbu narija faylga chiqarilsinmi y/n"<<endl;
			char a;
			cin>>a;
			if (a=='y')
			{
				ofstream fout ("kompyuter_natija.txt");
				for (it = m2.begin(); it!=m2.end(); it++)
				{
					fout<<it->first<<" "<<it->second<<endl;
				}
				cout<<"Natija faylga yuklandi";
			}
			else
			{
				for (it=m2.begin(); it!=m2.end(); it++)
				{
					cout<<it->first<<" "<<it->second;
					cout<<endl;
				}
				
			}
		}
		else
		cout<<"So'rov natijasi mavjud emas";
	}
	if (l==2)
	{
		for (int i=1; i<=n; i++)
		{
			string nomi, firma,xotira,yil,yadro;
			fin>>nomi>>firma>>xotira>>yil>>yadro;
			string s=nomi+" "+xotira+" "+yil+" "+yadro;
			m3.insert({firma, s});
		}
		multimap<string, string>::iterator it;
		string t;
		cout<<"Kompyuter firmasini kiriting : "<<endl;
		cin>>t;
		for (it=m3.begin(); it!=m3.end(); it++)
		{
			if (it->first==t)
			{
				string k=it->second;
				m4.insert({t,k}); 
			}
		}
		if (m4.size()>0)
		{
			cout<<"So`rov natijasi mavjud. Ushbu narija faylga chiqarilsinmi y/n"<<endl;
			char a;
			cin>>a;
			if (a=='y')
			{
				ofstream fout ("kompyuter_natija.txt");
				for (it = m4.begin(); it!=m4.end(); it++)
				{
					fout<<it->first<<" "<<it->second<<endl;
				}
				cout<<"Natija faylga yuklandi";
			}
			else
			{
				for (it=m4.begin(); it!=m4.end(); it++)
				{
					cout<<it->first<<" "<<it->second;
					cout<<endl;
				}
				
			}
		}
		else
		cout<<"So'rov natijasi mavjud emas";
	}
}

