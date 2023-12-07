/*
	13.	class davlat:
			nomi,
			aholi_soni,

		class shahar:
			tili,
			yer_maydoni,
			joylashgan_joyi,
	List konteyneridan foydalanib shahar ro'yxatida aholi_soni yashashi bo'yicha saralang.
*/
#include<iostream>
#include<fstream>
using namespace std;


class davlat{
	
	public:
		string nom;
		int aholi;
	
};


class shahar1: public davlat{
	private:
		string tili, joyi;
		int maydoni;
	public:
		shahar1(){};
	shahar1(string w, string t, string j, int a, int m)
	{
		nom = w;
		tili = t;
		joyi = j;
		aholi = a;
		maydoni = m;
	}
	static void saralash1 (shahar1* s1, int n)
	{
		for (int i=0; i<n; i++) 
		{
			for (int j=i+1; j<n; j++) 
			{
				if (s1[i].nom[0]==s1[j].nom[0]) 
				{
					if (s1[i].nom[1]==s1[j].nom[1]) 
					{
						if (s1[i].nom[2]>s1[j].nom[2])
						swap(s1[i],s1[j]);	
					}
					else if (s1[i].nom[1]>s1[j].nom[1])
					swap(s1[i],s1[j]);
				}
				if (s1[i].nom[0]>s1[j].nom[0]) 
				{
					swap(s1[i],s1[j]);
				}
			}
		}
	}
	void print1()
	{
		cout<<"\nShahar nomi : "<<nom<<"\nTili : "<<tili<<"\nJoylashgan joyi : "<<joyi<<"\nAholi soni : "<<aholi<<"\nMaydoni : "<<maydoni<<endl;
	}
};


class shahar2: public davlat{
	private:
		string tili, joyi;
		int maydoni;
	public:
		shahar2(){};
	shahar2(string w, string t, string j, int a, int m)
	{
		nom = w;
		tili = t;
		joyi = j;
		aholi = a;
		maydoni = m;
	}
	static void saralash2 (shahar2* s2, int n)
	{
		for (int i=0; i<n; i++) 
		{
			for (int j=i+1; j<n; j++) 
			{
				if (s2[i].tili[0]==s2[j].tili[0]) 
				{
					if (s2[i].tili[1]==s2[j].tili[1]) 
					{
						if (s2[i].tili[2]>s2[j].tili[2])
						swap(s2[i],s2[j]);	
					}
					else if (s2[i].tili[1]>s2[j].tili[1])
					swap(s2[i],s2[j]);
				}
				if (s2[i].tili[0]>s2[j].tili[0]) 
				{
					swap(s2[i],s2[j]);
				}
			}
		}
	}
	void print2()
	{
		cout<<"\nShahar nomi : "<<nom<<"\nTili : "<<tili<<"\nJoylashgan joyi : "<<joyi<<"\nAholi soni : "<<aholi<<"\nMaydoni : "<<maydoni<<endl;
	}
};


class shahar3: public davlat{
	private:
		string tili, joyi;
		int maydoni;
	public:
		shahar3(){};
	shahar3(string w, string t, string j, int a, int m)
	{
		nom = w;
		tili = t;
		joyi = j;
		aholi = a;
		maydoni = m;
	}
	static void saralash3 (shahar3* s3, int n)
	{
		for (int i=0; i<n; i++) 
		{
			for (int j=i+1; j<n; j++) 
			{
				if (s3[i].joyi[0]==s3[j].joyi[0]) 
				{
					if (s3[i].joyi[1]==s3[j].joyi[1]) 
					{
						if (s3[i].joyi[2]>s3[j].joyi[2])
						swap(s3[i],s3[j]);	
					}
					else if (s3[i].joyi[1]>s3[j].joyi[1])
					swap(s3[i],s3[j]);
				}
				if (s3[i].joyi[0]>s3[j].joyi[0]) 
				{
					swap(s3[i],s3[j]);
				}
			}
		}
	}
	void print3()
	{
		cout<<"\nShahar nomi : "<<nom<<"\nTili : "<<tili<<"\nJoylashgan joyi : "<<joyi<<"\nAholi soni : "<<aholi<<"\nMaydoni : "<<maydoni<<endl;
	}
};


class shahar4: public davlat{
	private:
		string tili, joyi;
		int maydoni;
	public:
		shahar4(){};
	shahar4(string w, string t, string j, int a, int m)
	{
		nom = w;
		tili = t;
		joyi = j;
		aholi = a;
		maydoni = m;
	}
	static void saralash4 (shahar4* s4, int n)
	{
		for (int i=0; i<n; i++) {
			for (int j=i+1; j<n; j++) {
				if (s4[i].aholi>s4[j].aholi)
					swap(s4[i],s4[j]);
			}
		}
	}
	void print4()
	{
		cout<<"\nShahar nomi : "<<nom<<"\nTili : "<<tili<<"\nJoylashgan joyi : "<<joyi<<"\nAholi soni : "<<aholi<<"\nMaydoni : "<<maydoni<<endl;
	}
};


class shahar5: public davlat{
	private:
		string tili, joyi;
		int maydoni;
	public:
		shahar5(){};
	shahar5(string w, string t, string j, int a, int m)
	{
		nom = w;
		tili = t;
		joyi = j;
		aholi = a;
		maydoni = m;
	}
	static void saralash5 (shahar5* s5, int n)
	{
		for (int i=0; i<n; i++) {
			for (int j=i+1; j<n; j++) {
				if (s5[i].maydoni>s5[j].maydoni)
					swap(s5[i],s5[j]);
			}
		}
	}
	void print5()
	{
		cout<<"\nShahar nomi : "<<nom<<"\nTili : "<<tili<<"\nJoylashgan joyi : "<<joyi<<"\nAholi soni : "<<aholi<<"\nMaydoni : "<<maydoni<<endl;
	}
};



int main()
{
	int n;
	ifstream fin("./fayllar/9_amaliyot(class).txt");
	fin>>n;
	
	// Parametr bo'yicha qidirish
	
	int p;
	cout<<"Qaysi parametr bo'yicha qidirmoqchisiz? \nShahar nomi bo`yicha - 1\nTili bo`yicha - 2\nJoylashgan joyi bo`yicha - 3\nAholi soni bo`yicha - 4\nMaydoni bo'yicha - 5\n";
	cin>>p;
	if (p==1)
	{
		shahar1* s1;
		s1 = new shahar1[n];
			for (int i=0; i<n; i++)
			{
				string w,t,j;
				int a,m;
				fin>>w>>t>>j>>a>>m;
				s1[i]=shahar1(w,t,j,a,m);
			}
			cout<<"Shaharlarni saralash (nomi bo'yicha) : \n";
			s1[0].saralash1(s1,n);
			for (int i=0; i<n; i++)
			{
				s1[i].print1();
			}
	}
	
	
	if (p==2)
	{
		shahar2* s2;
		s2 = new shahar2[n];
			for (int i=0; i<n; i++)
			{
				string w,t,j;
				int a,m;
				fin>>w>>t>>j>>a>>m;
				s2[i]=shahar2(w,t,j,a,m);
			}
			cout<<"Shaharlarni saralash (tili bo'yicha) : \n";
			s2[0].saralash2(s2,n);
			for (int i=0; i<n; i++)
			{
				s2[i].print2();
			}
	}
	
	
	if (p==3)
	{
		shahar3* s3;
		s3 = new shahar3[n];
			for (int i=0; i<n; i++)
			{
				string w,t,j;
				int a,m;
				fin>>w>>t>>j>>a>>m;
				s3[i]=shahar3(w,t,j,a,m);
			}
			cout<<"Shaharlarni saralash (joylashgan joyi bo'yicha) : \n";
			s3[0].saralash3(s3,n);
			for (int i=0; i<n; i++)
			{
				s3[i].print3();
			}
	}
	
	
	if (p==4)
	{
		shahar4* s4;
		s4 = new shahar4[n];
			for (int i=0; i<n; i++)
			{
				string w,t,j;
				int a,m;
				fin>>w>>t>>j>>a>>m;
				s4[i]=shahar4(w,t,j,a,m);
			}
			cout<<"Shaharlarni saralash (aholi soni bo'yicha) : \n";
			s4[0].saralash4(s4,n);
			for (int i=0; i<n; i++)
			{
				s4[i].print4();
			}
	}
	
	
	if (p==5)
	{
		shahar5* s5;
		s5 = new shahar5[n];
			for (int i=0; i<n; i++)
			{
				string w,t,j;
				int a,m;
				fin>>w>>t>>j>>a>>m;
				s5[i]=shahar5(w,t,j,a,m);
			}
			cout<<"Shaharlarni saralash (maydoni bo'yicha) : \n";
			s5[0].saralash5(s5,n);
			for (int i=0; i<n; i++)
			{
				s5[i].print5();
			}
	}
}
