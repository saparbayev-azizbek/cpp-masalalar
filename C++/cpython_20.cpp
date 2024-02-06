#include<iostream>
#include<cstdio>
using namespace std;
int summa(string x)
{
	int s=0;
	while(x.length()>1)
	{
		for (int i=0; i<x.length(); i++)
		{
			char j = x[i];
			s += int(int(j) - 48);
		}
		x = s;
	}
	return s;
}
int main()
{
	string a;
	cin>>a;
//	int m = summa(a);
//	char s[10];
//	sprintf(s, "%d", m);
	if (a.length()==1) cout<<a;
	else 
	{
		while(a.length()>1)
		{
			int k = summa(a);
			char s[2];
			sprintf(s, "%d", k);
			a = s;
		}
		cout<<a;
	}
	
	
	
//	else if (m<10) cout<<m;
//	else if (a.length()==2) cout<<summa(a);
//	else cout<<summa(s);
}
