#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int qidirish(string s1, string s2, string s3)
{
	int k = s2.find(s1);
	int l = s2.find(s3);
	if(k>=0 or l>=0) return 1;
	return 0;
}
int main()
{
	int h=0;
	string s2,s1="for(",s3="while(";
	while(cin>>s2)
	{
		if(qidirish(s1,s2,s3)==1) h++;
	}
	if(h!=0) cout<<"yes";
	else cout<<"no";
}
