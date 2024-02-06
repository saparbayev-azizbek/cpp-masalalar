/*
a)	Yangi konteynerlar hosil qiling, uni standart funksiyalar yordamida elementlar bilan to'lating 
search funksiyasi yordamida amallar bajaring;
b)	Iteratorlardan foydalanib multimap konteyneri ustida amallar bajaring;
*/
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main () 
{
	int myints[] = {1,2,3,4,5,4,3,2,1};
	vector <int> v(myints,myints+9);
	cout << "Vectordan 3ni qidirish\n";
	if (binary_search (v.begin(), v.end(), 3))
    cout <<"Topildi!\n"; 
	else cout <<"Topilmadi!\n";
}
