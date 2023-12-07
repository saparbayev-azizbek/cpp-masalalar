#include <iostream>
#include <map>
#include <fstream>
using namespace std;
int main()
{
	multimap<int, string> m, m2;
	ifstream fin ("TTJ.txt");
	int n;
	fin>>n;
	for (int i = 0; i<n; i++)
	{
		string nomi, direktor, xona_soni, nogiron_soni, qizlar_soni, bollar_soni, nomeri;
		int talaba_soni;
		fin>>nomi>>direktor>>xona_soni>>talaba_soni>>qizlar_soni>>bollar_soni>>nogiron_soni>>nomeri;
		string s = nomi+" "+direktor+" "+xona_soni+" "+qizlar_soni+" "+bollar_soni+" "+nogiron_soni+" "+nomeri; 
		m.insert({talaba_soni,s});
	}
	multimap<int, string>::iterator it;
	int t;
	cout<<"Talabalar sonini kiriting: ";
	cin>>t;
	for (it=m.begin(); it!=m.end(); it++)
	{
		if(it->first==t)
		{
			string s = it->second;
			m2.insert({ t,s });
		} 	
	}
	if(m2.size()>0)
	{
		cout<<"So'rov natijasi bor. Natijani faylga chiqaramizmi? y/n"<<endl;
		char a;
		cin>>a;
		if (a=='y')
		{
			ofstream fout("natija.txt");
			for (it=m2.begin(); it!=m2.end(); it++) 
			{ 
				fout<<it->first<<" "<<it->second<<endl;
			}
			cout<<"Natijalar natija.txt fayliga yuklandi";
		}
		else
		{
			for (it=m2.begin(); it!=m2.end(); it++) 
			{ 
				cout<<it->first<<" "<<it->second<<endl;
			}	
		}
	}
	else cout<<"So'rov natijasi yo'q";
}

