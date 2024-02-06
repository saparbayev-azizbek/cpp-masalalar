/*
		Berilgan sonlar ketma-ketligida elementlarini 
		kvadratlari yigindisi va o'rtacha qiymati hisoblansin
*/
#include<iostream>
#include<stack>
using namespace std;
void print (stack <int> st)
{
	int s=0,p=0,m=st.size();
	
	while(!st.empty())
	{
		s+=st.top()*st.top();
		p+=st.top();
		st.pop();
	}
	cout<<"Kvadratlari yig`indisi : "<<s<<endl;
	cout<<"O'rta arifmetigi : "<<p/m;
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
