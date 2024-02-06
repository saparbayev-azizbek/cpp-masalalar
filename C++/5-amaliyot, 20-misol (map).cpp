/*    8	
		Universitetlar haqida (nomi, rektor_FIO, xodimlar soni, 
	fanlar soni, talabalar soni va professorlar soni) to'plam berilgan. 
	Universitetlarni nomi, rektor_FIO, xodimlar soni, fanlar soni, 
	talabalar soni va professorlar soni bo'yicha qidiruvchi 
	hamda topilgan natijani faylga saqlashni taklif qiladigan dastur tuzing.

*/
#include<iostream>
#include<map>
#include<string>
using namespace std;
int main()
{
	    int n; bool t=false; string fam,ism;
	    multimap<string,int> M,M2;
	cout<<"Universitetlar sonini kiriting: "; cin>>n;
	for (int i = 0; i < n; i++)
	{
			string universitet, rektor;
			int xodim,fan,talaba,professor;
		cout<<i+1<<" - Universitet ma'lumotlarini kiriting:"<<endl;
		cout<<"Nomi : "; cin>>universitet;
		cout<<"Rektori: "; cin>>fam>>ism;
		cout<<"Xodimlar soni : "; cin>>xodim;
		cout<<"Fanlar soni : "; cin>>fan;
		cout<<"Talabalar soni : "; cin>>talaba;
		cout<<"Professorlar soni : "; cin>>professor;
		string matn;
		int son;
		rektor = fam + " " +ism;
		matn = universitet + " " + rektor;
		son = xodim + fan + talaba + professor;
		M.insert(pair<string, int> (matn,son));
	}
	string S;
int N;
cout<<"Qancha oladigan talabasi bor universitet kerak? \n";
cin>>N;
int k=0;
multimap <string , int> :: iterator it;
for ( it = M.begin(); it != M.end(); ++it){
S = it->first;
if(S.find(" ")<S.length() && it->second == N){
M2.insert(pair<string, int>(S,N));t=true;}
}
cout<<"So'rov Natijasi:"<<endl;
if(t){ cout<<"bor"<<endl;
for ( it = M2.begin(); it != M2.end(); ++it){
	cout<<it->first<<" "<<it->second<<endl;
}
} else cout<<"yo'q";
}
