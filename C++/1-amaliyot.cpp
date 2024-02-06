#include<iostream>
using namespace std;
class university
{
	protected:
		string nom,joy;
		int son,yil;
	public:
		university(string n, string j, int s, int y)
		{
			n=nom;
			j=joy;
			s=son;
			y=yil;
		}
	virtual int yosh()
	{
		int yosh = 2023-yil;
	}
	void axborot()
	{
		cout<<"Nomlanishi :     "<< nom << endl
			<<"Joylashgan joyi :       "<< joy << endl
			<<"Talabalar soni :    "<< son << endl
			<<"Tashkil topgan yili : "<< yil << endl
			<<"Yoshi :          "<< yosh() <<"\n\n";
	}
};
class kollej :public university {
public:
	kollej (string nom, string joy, int son, int yil) : university(nom, joy, son, yil){}
	int yosh() {
		return 2023-yil;
	}
};
int main()
{
	string nom,joy;
	int son,yil;
	cout<<"Universitetning nomini kiriting : "; getline(cin,nom);
	cout<<nom<<" joylashgan shahar nomini kiriting : "; getline(cin,joy);
	cout<<nom<<" talabalari sonini kiriting : "; cin>>son;
	cout<<nom<<" tashkil topgan yilni kiriting : "; cin>>yil;
	university a=university(nom,joy,son,yil);
	cout<<"\nUniversitetning nomini kiriting : "; getline(cin,nom);
	cout<<nom<<" joylashgan shahar nomini kiriting : "; getline(cin,joy);
	cout<<nom<<" talabalari sonini kiriting : "; cin>>son;
	cout<<nom<<" tashkil topgan yilni kiriting : "; cin>>yil;
	university b=university(nom,joy,son,yil);
	cout<<"\nKollejning nomini kiriting : "; getline(cin,nom);
	cout<<nom<<" joylashgan shahar nomini kiriting : "; getline(cin,joy);
	cout<<nom<<" o'quvchilari sonini kiriting : "; cin>>son;
	cout<<nom<<" tashkil topgan yilni kiriting : "; cin>>yil;
	kollej c=kollej(nom,joy,son,yil);
	cout <<"\n\nNatija:\n\n";
	a.axborot();
	b.axborot();
	c.axborot();
}
