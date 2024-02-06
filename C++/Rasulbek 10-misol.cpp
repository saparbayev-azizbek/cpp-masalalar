#include<iostream>
#include<fstream>
#include<algorithm>
using namespace std;


class Talaba{
	public:
		string ism,familiya;
		int yosh,baho;
};
class talaba: public Talaba{
	public:
		talaba(){};
	talaba(string first_name, string last_name, int age, int grade)
	{
		ism = first_name;
		familiya = last_name;
		yosh = age;
		baho = grade;
	}
	static void saralash1 (talaba* s1, int n)
	{
		for (int i=0; i<n; i++)
		{
			for (int j=i+1; j<n; j++) 
			{
				if (s1[i].ism[0]==s1[j].ism[0]) 
				{
					if (s1[i].ism[1]==s1[j].ism[1]) 
					{
						if (s1[i].ism[2]>s1[j].ism[2])
						swap(s1[i],s1[j]);	
					}
					else if (s1[i].ism[1]>s1[j].ism[1])
					swap(s1[i],s1[j]);
				}
				if (s1[i].ism[0]>s1[j].ism[0]) 
				{
					swap(s1[i],s1[j]);
				}
			}
		}
	}
	void print1()
	{
		cout<<"\nIsm : "<<ism<<"\nFamiliya : "<<familiya<<"\nYoshi : "<<yosh<<"\nBahosi : "<<baho<<endl;
	}
};
int main()
{
	int n;
	ifstream fin("./fayllar/9_amaliyot(class).txt");
	fin>>n;
	
	talaba* s1;
	s1 = new talaba[n];
		for (int i=0; i<n; i++)
		{
			string first_name,last_name;
			int age,grade;
			fin>>first_name>>last_name>>age>>grade;
			s1[i]=talaba(first_name,last_name,age,grade);
		}
		cout<<"Talabalarni saralash (ismi bo'yicha) : \n";
		s1[0].saralash1(s1,n);
		for (int i=0; i<n; i++)
		{
			s1[i].print1();
		}
}
