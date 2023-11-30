#include<iostream>
using namespace std;
int main()
{
	string n;
	int m;
	cin>>n;
	cin>>m;
	if (n[length()-1]==0) cout<<0;
	if (n.size()-1==1) cout<<1;
	if (n.size()-1==2)
	{
		if (m%4==1) cout<<2;
		if (m%4==2) cout<<4;
		if (m%4==3) cout<<8;
		if (m%4==0) cout<<6;
	}
	if (n.size()-1==3)
	{
		if (m%4==1) cout<<3;
		if (m%4==2) cout<<9;
		if (m%4==3) cout<<7;
		if (m%4==0) cout<<1;
	}
	if (n.size()-1==4)
	{
		if (m%2==1) cout<<4;
		if (m%2==0) cout<<6;
	}
	if (n.size()-1==5) cout<<5;
	if (n.size()-1==6) cout<<6;
	if (n.size()-1==7)
	{
		if (m%4==1) cout<<7;
		if (m%4==2) cout<<9;
		if (m%4==3) cout<<3;
		if (m%4==0) cout<<1;
	}
	if (n.size()-1==8)
	{
		if (m%4==1) cout<<8;
		if (m%4==2) cout<<4;
		if (m%4==3) cout<<2;
		if (m%4==0) cout<<6;
	}if (n.size()-1==9)
	{
		if (m%2==1) cout<<9;
		if (m%2==0) cout<<1;
	}
}
