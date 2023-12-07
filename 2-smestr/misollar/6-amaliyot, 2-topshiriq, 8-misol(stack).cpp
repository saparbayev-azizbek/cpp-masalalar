/*	8
	Stek o'rtasidagi element o'chirib tashlansin. 
	Agar stek elementi toq bo'lsa, bitta element, aks 
	holda ikkita element o'chirilsin.
*/
#include<iostream>
#include<stack>
using namespace std;
void print (stack <int> st)
{
	int k=st.size();
	if (k%2==1)
	{
		cout<<"Stack o`rtasidagi elementidan tashqari elementlari :\n";
		for (int i=0; i<k; i++)
		{
			int f=k/2;
			if (i!=f)
			{
				cout<<st.top()<<" ";
				st.pop();
			}
			else
			st.pop();
		}
	}
	if (k%2==0)
	{
		cout<<"Stack o`rtasidagi elementlaridan tashqari elementlari :\n";
		for (int i=1; i<=k; i++)
		{
			int f=k/2;
			if (i==f or i==f+1)
			{
				st.pop();
			}
			else
			{
				cout<<st.top()<<" ";
				st.pop();
			}
		}
	}
}
int main()
{
	
	stack <int> st;
	int a,n;
	cout<<"Elementlari soni : ";
	cin>>n;
	for (int i=1; i<=n; i++)
	{
		cin>>a;
		st.push(a);
	}
	print(st);
}
