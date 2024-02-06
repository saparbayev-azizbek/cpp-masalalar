/*
	Fanlar haqida (nomi, o'qituvchi_FIO, 5 chilar soni, 4 chilar soni, 
	3 chilar soni va o'zlashtira olmaganlar soni) to'plam berilgan. 
	Fanlarni nomi, o'qituvchi_FIO, 5 chilar soni, 4 chilar soni, 3 chilar 
	soni va o'zlashtira olmaganlar soni bo'yicha qidiruvchi hamda 
	topilgan natijani faylga saqlashni taklif qiladigan dastur tuzing.
*/
#include<iostream>
#include<map>
#include<fstream>
using namespace std;
int main()
{
	multimap <int , string> m,m2,m3,m4,m5;
	multimap <string, string> m6,m7,m8;
	ifstream fin ("./fayllar/fanlar__5.txt");
	int n;
	fin>>n;
	
	int a;
	cout<<"Qaysi parametr bo`yicha qidiruvni amalga oshirmoqchisiz?\n"<<"Fanlar nomi bo`yicha - 1\n"<<"O`chituvchi FIOsi bo`icha - 2\n"<<"5 chilar soni bo`yicha - 3\n"<<"4 chilar soni bo`yicha - 4\n"<<"3 chilar soni bo`yicha - 5\n"<<"O`zlashtira olmaganlar soni bo`yicha - 6\n";
	cin>>a;
	if (a==6)
	{
		for (int i=1; i<=n; i++)
		{
			string scienses, teacher, five, four, three;
			int fail;
			fin>>scienses>>teacher>>five>>four>>three>>fail;
			string s=scienses+" "+teacher+" "+five+" "+four+" "+three;
			m.insert(pair<int, string> (fail, s));
		}
		multimap<int, string>::iterator it;
		int t;
		cout<<"Imtihondan yilqilgan talabalar sonini kiriting : ";
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
			cout<<"So`rov natijasi mavjud. Ushbu natija faylga chiqarilsinmi y/n"<<endl;
			char a;
			cin>>a;
			if (a=='y')
			{
				ofstream fout ("result__5.txt");
				for (it = m2.begin(); it!=m2.end(); it++)
				{
					fout<<it->first<<" "<<it->second<<endl;
					fout<<endl;
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
	if (a==5)
	{
		for (int i=1; i<=n; i++)
		{
			string scienses3, teacher3, five3, four3, fail3;
			int three3;
			fin>>scienses3>>teacher3>>five3>>four3>>three3>>fail3;
			string s3=scienses3+" "+teacher3+" "+five3+" "+four3+" "+fail3;
			m3.insert(pair<int,string> (three3, s3));
		}
			multimap<int, string>::iterator it;
			
		int t;
		cout<<"3 chilar sonini kiriting : ";
		cin>>t;
		for (it=m3.begin(); it!=m3.end(); it++)
		{
			if (it->first==t)
			{
				string k=it->second;
				m2.insert(pair<int, string> (t,k)); 
			}
		}
		if (m2.size()>0)
		{
			cout<<"So`rov natijasi mavjud. Ushbu natija faylga chiqarilsinmi y/n"<<endl;
			char a;
			cin>>a;
			if (a=='y')
			{
				ofstream fout ("./fayllar/result__5.txt");
				for (it = m2.begin(); it!=m2.end(); it++)
				{
					fout<<it->first<<" "<<it->second<<endl;
					fout<<endl;
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
	if (a==4)
	{
		for (int i=1; i<=n; i++)
		{
			string scienses4, teacher4, five4, three4, fail4;
			int four4;
			fin>>scienses4>>teacher4>>five4>>four4>>three4>>fail4;
			string s4=scienses4+" "+teacher4+" "+five4+" "+three4+" "+fail4;
			m4.insert(pair<int, string> (four4, s4));
		}
		multimap<int, string>::iterator it;
		int t;
		cout<<"4 chilar sonini kiriting : ";
		cin>>t;
		for (it=m4.begin(); it!=m4.end(); it++)
		{
			if (it->first==t)
			{
				string k=it->second;
				m2.insert(pair<int, string> (t,k));
			}
		}
		if (m2.size()>0)
		{
			cout<<"So`rov natijasi mavjud. Ushbu natija faylga chiqarilsinmi y/n"<<endl;
			char a;
			cin>>a;
			if (a=='y')
			{
				ofstream fout ("result__5.txt");
				for (it = m2.begin(); it!=m2.end(); it++)
				{
					fout<<it->first<<" "<<it->second<<endl;
					fout<<endl;
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
	if (a==3)
	{
		for (int i=1; i<=n; i++)
		{
			string scienses, teacher, four, three, fail;
			int five;
			fin>>scienses>>teacher>>five>>four>>three>>fail;
			string s=scienses+" "+teacher+" "+four+" "+three+" "+fail;
			m5.insert(pair<int, string> (five, s));
		}
		multimap<int, string>::iterator it;
		int t;
		cout<<"5 chilar sonini kiriting : ";
		cin>>t;
		for (it=m5.begin(); it!=m5.end(); it++)
		{
			if (it->first==t)
			{
				string k=it->second;
				m2.insert(pair<int, string> (t,k));
			}
		}
		if (m2.size()>0)
		{
			cout<<"So`rov natijasi mavjud. Ushbu natija faylga chiqarilsinmi y/n"<<endl;
			char a;
			cin>>a;
			if (a=='y')
			{
				ofstream fout ("result__5.txt");
				for (it = m2.begin(); it!=m2.end(); it++)
				{
					fout<<it->first<<" "<<it->second<<endl;
					fout<<endl;
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
	if (a==2)
	{
		for (int i=1; i<=n; i++)
		{
			string scienses, five, four, three, fail;
			string teacher;
			fin>>scienses>>teacher>>five>>four>>three>>fail;
			string s=scienses+" "+five+" "+four+" "+three+" "+fail;
			m6.insert(pair<string, string> (teacher, s));
		}
		multimap<string, string>::iterator it1;
		string t;
		cout<<"O`qituvchining ism familiyasini kiriting : ";
		cin>>t;
		for (it1=m6.begin(); it1!=m6.end(); it1++)
		{
			if (it1->first==t)
			{
				string k=it1->second;
				m8.insert(pair<string, string> (t,k)); 
			}
		}
		if (m8.size()>0)
		{
			cout<<"So`rov natijasi mavjud. Ushbu natija faylga chiqarilsinmi y/n"<<endl;
			char a;
			cin>>a;
			if (a=='y')
			{
				ofstream fout ("result__5.txt");
				for (it1 = m8.begin(); it1!=m8.end(); it1++)
				{
					fout<<it1->first<<" "<<it1->second<<endl;
					fout<<endl;
				}
				cout<<"Natija faylga yuklandi";
			}
			else
			{
				for (it1=m8.begin(); it1!=m8.end(); it1++)
				{
					cout<<it1->first<<" "<<it1->second;
					cout<<endl;
				}
			}
		}
		else
		cout<<"So'rov natijasi mavjud emas";
	}
	if (a==1)
	{
		for (int i=1; i<=n; i++)
		{
			string teacher, five, four, three, fail;
			string scienses;
			fin>>scienses>>teacher>>five>>four>>three>>fail;
			string s=teacher+" "+five+" "+four+" "+three+" "+fail;
			m7.insert(pair<string, string> (scienses, s));
		}
		multimap<string, string>::iterator it1;
		string t;
		cout<<"Fan nomini kiriting : ";
		cin>>t;
		for (it1=m7.begin(); it1!=m7.end(); it1++)
		{
			if (it1->first==t)
			{
				string k=it1->second;
				m8.insert(pair<string, string> (t,k)); 
			}
		}
		if (m8.size()>0)
		{
			cout<<"So`rov natijasi mavjud. Ushbu natija faylga chiqarilsinmi y/n"<<endl;
			char a;
			cin>>a;
			if (a=='y')
			{
				ofstream fout ("result__5.txt");
				for (it1 = m8.begin(); it1!=m8.end(); it1++)
				{
					fout<<it1->first<<" "<<it1->second<<endl;
					fout<<endl;
				}
				cout<<"Natija faylga yuklandi";
			}
			else
			{
				for (it1=m8.begin(); it1!=m8.end(); it1++)
				{
					cout<<it1->first<<" "<<it1->second;
					cout<<endl;
				}
			}
		}
		else
		cout<<"So'rov natijasi mavjud emas";
	}
}
