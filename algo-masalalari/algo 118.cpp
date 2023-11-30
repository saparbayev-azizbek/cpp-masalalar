#include<iostream>
#include<math.h>
using namespace std;
int main(){
	int n,a;
	cin>>n;
	if (n>=1 and n<=31)
	{
		if (n%7==1) cout<<n<<"-"<<"Yanvar, "<<"Payshanba";
		else if (n%7==2) cout<<n<<"-"<<"Yanvar, "<<"Juma";
		else if (n%7==3) cout<<n<<"-"<<"Yanvar, "<<"Shanba";
		else if (n%7==4) cout<<n<<"-"<<"Yanvar, "<<"Yakshanba";
		else if (n%7==5) cout<<n<<"-"<<"Yanvar, "<<"Dushanba";
		else if (n%7==6) cout<<n<<"-"<<"Yanvar, "<<"Seshanba";
		else if (n%7==0) cout<<n<<"-"<<"Yanvar, "<<"Chorshanba";
	}
	if (n>=32 and n<=59)
	{
		if (n%7==5) cout<<n<<"-"<<"Fevral, "<<"Payshanba";
		else if (n%7==6) cout<<n<<"-"<<"Fevral, "<<"Juma";
		else if (n%7==0) cout<<n<<"-"<<"Fevral, "<<"Shanba";
		else if (n%7==1) cout<<n<<"-"<<"Fevral, "<<"Yakshanba";
		else if (n%7==2) cout<<n<<"-"<<"Fevral, "<<"Dushanba";
		else if (n%7==3) cout<<n<<"-"<<"Fevral, "<<"Seshanba";
		else if (n%7==4) cout<<n<<"-"<<"Fevral, "<<"Chorshanba";
	}
	if (n>=60 and n<=90)
	{
		if (n%7==5) cout<<n<<"-"<<"Mart, "<<"Payshanba";
		else if (n%7==6) cout<<n<<"-"<<"Mart, "<<"Juma";
		else if (n%7==0) cout<<n<<"-"<<"Mart, "<<"Shanba";
		else if (n%7==1) cout<<n<<"-"<<"Mart, "<<"Yakshanba";
		else if (n%7==2) cout<<n<<"-"<<"Mart, "<<"Dushanba";
		else if (n%7==3) cout<<n<<"-"<<"Mart, "<<"Seshanba";
		else if (n%7==4) cout<<n<<"-"<<"Mart, "<<"Chorshanba";
	}
	if (n>=91 and n<=120)
	{
		if (n%7==2) cout<<n<<"-"<<"Aprel, "<<"Payshanba";
		else if (n%7==3) cout<<n<<"-"<<"Aprel, "<<"Juma";
		else if (n%7==4) cout<<n<<"-"<<"Aprel, "<<"Shanba";
		else if (n%7==5) cout<<n<<"-"<<"Aprel, "<<"Yakshanba";
		else if (n%7==6) cout<<n<<"-"<<"Aprel, "<<"Dushanba";
		else if (n%7==0) cout<<n<<"-"<<"Aprel, "<<"Seshanba";
		else if (n%7==1) cout<<n<<"-"<<"Aprel, "<<"Chorshanba";
	}
	if (n>=121 and n<=151)
	{
		if (n%7==0) cout<<n<<"-"<<"May, "<<"Payshanba";
		else if (n%7==1) cout<<n<<"-"<<"May, "<<"Juma";
		else if (n%7==2) cout<<n<<"-"<<"May, "<<"Shanba";
		else if (n%7==3) cout<<n<<"-"<<"May, "<<"Yakshanba";
		else if (n%7==4) cout<<n<<"-"<<"May, "<<"Dushanba";
		else if (n%7==5) cout<<n<<"-"<<"May, "<<"Seshanba";
		else if (n%7==6) cout<<n<<"-"<<"May, "<<"Chorshanba";
	}
	if (n>=152 and n<=181)
	{
		if (n%7==4) cout<<n<<"-"<<"Iyun, "<<"Payshanba";
		else if (n%7==5) cout<<n<<"-"<<"Iyun, "<<"Juma";
		else if (n%7==6) cout<<n<<"-"<<"Iyun, "<<"Shanba";
		else if (n%7==0) cout<<n<<"-"<<"Iyun, "<<"Yakshanba";
		else if (n%7==1) cout<<n<<"-"<<"Iyun, "<<"Dushanba";
		else if (n%7==2) cout<<n<<"-"<<"Iyun, "<<"Seshanba";
		else if (n%7==3) cout<<n<<"-"<<"Iyun, "<<"Chorshanba";
	}
	if (n>=182 and n<=212)
	{
		if (n%7==2) cout<<n<<"-"<<"Iyul, "<<"Payshanba";
		else if (n%7==3) cout<<n<<"-"<<"Iyul, "<<"Juma";
		else if (n%7==4) cout<<n<<"-"<<"Iyul, "<<"Shanba";
		else if (n%7==5) cout<<n<<"-"<<"Iyul, "<<"Yakshanba";
		else if (n%7==6) cout<<n<<"-"<<"Iyul, "<<"Dushanba";
		else if (n%7==0) cout<<n<<"-"<<"Iyul, "<<"Seshanba";
		else if (n%7==1) cout<<n<<"-"<<"Iyul, "<<"Chorshanba";
	}
	if (n>=213 and n<=243)
	{
		if (n%7==6) cout<<n<<"-"<<"Avgust, "<<"Payshanba";
		else if (n%7==0) cout<<n<<"-"<<"Avgust, "<<"Juma";
		else if (n%7==1) cout<<n<<"-"<<"Avgust, "<<"Shanba";
		else if (n%7==2) cout<<n<<"-"<<"Avgust, "<<"Yakshanba";
		else if (n%7==3) cout<<n<<"-"<<"Avgust, "<<"Dushanba";
		else if (n%7==4) cout<<n<<"-"<<"Avgust, "<<"Seshanba";
		else if (n%7==5) cout<<n<<"-"<<"Avgust, "<<"Chorshanba";
	}
	if (n>=244 and n<=273)
	{
		if (n%7==3) cout<<n<<"-"<<"Sentabr, "<<"Payshanba";
		else if (n%7==4) cout<<n<<"-"<<"Sentabr, "<<"Juma";
		else if (n%7==5) cout<<n<<"-"<<"Sentabr, "<<"Shanba";
		else if (n%7==6) cout<<n<<"-"<<"Sentabr, "<<"Yakshanba";
		else if (n%7==0) cout<<n<<"-"<<"Sentabr, "<<"Dushanba";
		else if (n%7==1) cout<<n<<"-"<<"Sentabr, "<<"Seshanba";
		else if (n%7==2) cout<<n<<"-"<<"Sentabr, "<<"Chorshanba";
	}
	if (n>=274 and n<=304)
	{
		if (n%7==1) cout<<n<<"-"<<"Oktabr, "<<"Payshanba";
		else if (n%7==2) cout<<n<<"-"<<"Oktabr, "<<"Juma";
		else if (n%7==3) cout<<n<<"-"<<"Oktabr, "<<"Shanba";
		else if (n%7==4) cout<<n<<"-"<<"Oktabr, "<<"Yakshanba";
		else if (n%7==5) cout<<n<<"-"<<"Oktabr, "<<"Dushanba";
		else if (n%7==6) cout<<n<<"-"<<"Oktabr, "<<"Seshanba";
		else if (n%7==0) cout<<n<<"-"<<"Oktabr, "<<"Chorshanba";
	}
	if (n>=305 and n<=334)
	{
		if (n%7==5) cout<<n<<"-"<<"Noyabr, "<<"Payshanba";
		else if (n%7==6) cout<<n<<"-"<<"Noyabr, "<<"Juma";
		else if (n%7==0) cout<<n<<"-"<<"Noyabr, "<<"Shanba";
		else if (n%7==1) cout<<n<<"-"<<"Noyabr, "<<"Yakshanba";
		else if (n%7==2) cout<<n<<"-"<<"Noyabr, "<<"Dushanba";
		else if (n%7==3) cout<<n<<"-"<<"Noyabr, "<<"Seshanba";
		else if (n%7==4) cout<<n<<"-"<<"Noyabr, "<<"Chorshanba";
	}
	if (n>=335 and n<=365)
	{
		if (n%7==3) cout<<n<<"-"<<"Dekabr, "<<"Payshanba";
		else if (n%7==4) cout<<n<<"-"<<"Dekabr, "<<"Juma";
		else if (n%7==5) cout<<n<<"-"<<"Dekabr, "<<"Shanba";
		else if (n%7==6) cout<<n<<"-"<<"Dekabr, "<<"Yakshanba";
		else if (n%7==0) cout<<n<<"-"<<"Dekabr, "<<"Dushanba";
		else if (n%7==1) cout<<n<<"-"<<"Dekabr, "<<"Seshanba";
		else if (n%7==2) cout<<n<<"-"<<"Dekabr, "<<"Chorshanba";
	}
}
