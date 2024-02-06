/*
		Berilgan sonlar ketma-ketligida elementlarini 
	kvadratlari yigindisi va o'rtacha qiymati hisoblansin
*/
#include<iostream>
#include<queue>
using namespace std;
void print (priority_queue <int> st)
{
	int s=0;
	while(!st.empty())
	{
		s+=st.top()*st.top();
		st.pop();
	}
	cout<<"Kvadratlari yig`indisi : "<<s;
}
int main()
{
	priority_queue <int> st;
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
