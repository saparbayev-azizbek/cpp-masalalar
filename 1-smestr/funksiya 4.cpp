#include<iostream>
#include<math.h>
using namespace std;
int main(){
	int n;
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
		if (n%7==1) cout<<n-31<<"-"<<"Fevral, "<<"Payshanba";
		else if (n%7==2) cout<<n-31<<"-"<<"Fevral, "<<"Juma";
		else if (n%7==3) cout<<n-31<<"-"<<"Fevral, "<<"Shanba";
		else if (n%7==4) cout<<n-31<<"-"<<"Fevral, "<<"Yakshanba";
		else if (n%7==5) cout<<n-31<<"-"<<"Fevral, "<<"Dushanba";
		else if (n%7==6) cout<<n-31<<"-"<<"Fevral, "<<"Seshanba";
		else if (n%7==0) cout<<n-31<<"-"<<"Fevral, "<<"Chorshanba";
	}
	if (n>=60 and n<=90)
	{
		if (n%7==1) cout<<n-59<<"-"<<"Mart, "<<"Payshanba";
		else if (n%7==2) cout<<n-59<<"-"<<"Mart, "<<"Juma";
		else if (n%7==3) cout<<n-59<<"-"<<"Mart, "<<"Shanba";
		else if (n%7==4) cout<<n-59<<"-"<<"Mart, "<<"Yakshanba";
		else if (n%7==5) cout<<n-59<<"-"<<"Mart, "<<"Dushanba";
		else if (n%7==6) cout<<n-59<<"-"<<"Mart, "<<"Seshanba";
		else if (n%7==0) cout<<n-59<<"-"<<"Mart, "<<"Chorshanba";
	}
	if (n>=91 and n<=120)
	{
		if (n%7==1) cout<<n-90<<"-"<<"Aprel, "<<"Payshanba";
		else if (n%7==2) cout<<n-90<<"-"<<"Aprel, "<<"Juma";
		else if (n%7==3) cout<<n-90<<"-"<<"Aprel, "<<"Shanba";
		else if (n%7==4) cout<<n-90<<"-"<<"Aprel, "<<"Yakshanba";
		else if (n%7==5) cout<<n-90<<"-"<<"Aprel, "<<"Dushanba";
		else if (n%7==6) cout<<n-90<<"-"<<"Aprel, "<<"Seshanba";
		else if (n%7==0) cout<<n-90<<"-"<<"Aprel, "<<"Chorshanba";
	}
	if (n>=121 and n<=151)
	{
		if (n%7==1) cout<<n-120<<"-"<<"May, "<<"Payshanba";
		else if (n%7==2) cout<<n-120<<"-"<<"May, "<<"Juma";
		else if (n%7==3) cout<<n-120<<"-"<<"May, "<<"Shanba";
		else if (n%7==4) cout<<n-120<<"-"<<"May, "<<"Yakshanba";
		else if (n%7==5) cout<<n-120<<"-"<<"May, "<<"Dushanba";
		else if (n%7==6) cout<<n-120<<"-"<<"May, "<<"Seshanba";
		else if (n%7==0) cout<<n-120<<"-"<<"May, "<<"Chorshanba";
	}
	if (n>=152 and n<=181)
	{
		if (n%7==1) cout<<n-151<<"-"<<"Iyun, "<<"Payshanba";
		else if (n%7==2) cout<<n-151<<"-"<<"Iyun, "<<"Juma";
		else if (n%7==3) cout<<n-151<<"-"<<"Iyun, "<<"Shanba";
		else if (n%7==4) cout<<n-151<<"-"<<"Iyun, "<<"Yakshanba";
		else if (n%7==5) cout<<n-151<<"-"<<"Iyun, "<<"Dushanba";
		else if (n%7==6) cout<<n-151<<"-"<<"Iyun, "<<"Seshanba";
		else if (n%7==0) cout<<n-151<<"-"<<"Iyun, "<<"Chorshanba";
	}
	if (n>=182 and n<=212)
	{
		if (n%7==1) cout<<n-181<<"-"<<"Iyul, "<<"Payshanba";
		else if (n%7==2) cout<<n-181<<"-"<<"Iyul, "<<"Juma";
		else if (n%7==3) cout<<n-181<<"-"<<"Iyul, "<<"Shanba";
		else if (n%7==4) cout<<n-181<<"-"<<"Iyul, "<<"Yakshanba";
		else if (n%7==5) cout<<n-181<<"-"<<"Iyul, "<<"Dushanba";
		else if (n%7==6) cout<<n-181<<"-"<<"Iyul, "<<"Seshanba";
		else if (n%7==0) cout<<n-181<<"-"<<"Iyul, "<<"Chorshanba";
	}
	if (n>=213 and n<=243)
	{
		if (n%7==1) cout<<n-212<<"-"<<"Avgust, "<<"Payshanba";
		else if (n%7==2) cout<<n-212<<"-"<<"Avgust, "<<"Juma";
		else if (n%7==3) cout<<n-212<<"-"<<"Avgust, "<<"Shanba";
		else if (n%7==4) cout<<n-212<<"-"<<"Avgust, "<<"Yakshanba";
		else if (n%7==5) cout<<n-212<<"-"<<"Avgust, "<<"Dushanba";
		else if (n%7==6) cout<<n-212<<"-"<<"Avgust, "<<"Seshanba";
		else if (n%7==0) cout<<n-212<<"-"<<"Avgust, "<<"Chorshanba";
	}
	if (n>=244 and n<=273)
	{
		if (n%7==1) cout<<n-243<<"-"<<"Sentabr, "<<"Payshanba";
		else if (n%7==2) cout<<n-243<<"-"<<"Sentabr, "<<"Juma";
		else if (n%7==3) cout<<n-243<<"-"<<"Sentabr, "<<"Shanba";
		else if (n%7==4) cout<<n-243<<"-"<<"Sentabr, "<<"Yakshanba";
		else if (n%7==5) cout<<n-243<<"-"<<"Sentabr, "<<"Dushanba";
		else if (n%7==6) cout<<n-243<<"-"<<"Sentabr, "<<"Seshanba";
		else if (n%7==0) cout<<n-243<<"-"<<"Sentabr, "<<"Chorshanba";
	}
	if (n>=274 and n<=304)
	{
		if (n%7==1) cout<<n-273<<"-"<<"Oktabr, "<<"Payshanba";
		else if (n%7==2) cout<<n-273<<"-"<<"Oktabr, "<<"Juma";
		else if (n%7==3) cout<<n-273<<"-"<<"Oktabr, "<<"Shanba";
		else if (n%7==4) cout<<n-273<<"-"<<"Oktabr, "<<"Yakshanba";
		else if (n%7==5) cout<<n-273<<"-"<<"Oktabr, "<<"Dushanba";
		else if (n%7==6) cout<<n-273<<"-"<<"Oktabr, "<<"Seshanba";
		else if (n%7==0) cout<<n-273<<"-"<<"Oktabr, "<<"Chorshanba";
	}
	if (n>=305 and n<=334)
	{
		if (n%7==1) cout<<n-304<<"-"<<"Noyabr, "<<"Payshanba";
		else if (n%7==2) cout<<n-304<<"-"<<"Noyabr, "<<"Juma";
		else if (n%7==3) cout<<n-304<<"-"<<"Noyabr, "<<"Shanba";
		else if (n%7==4) cout<<n-304<<"-"<<"Noyabr, "<<"Yakshanba";
		else if (n%7==5) cout<<n-304<<"-"<<"Noyabr, "<<"Dushanba";
		else if (n%7==6) cout<<n-304<<"-"<<"Noyabr, "<<"Seshanba";
		else if (n%7==0) cout<<n-304<<"-"<<"Noyabr, "<<"Chorshanba";
	}
	if (n>=335 and n<=365)
	{
		if (n%7==1) cout<<n-334<<"-"<<"Dekabr, "<<"Payshanba";
		else if (n%7==2) cout<<n-334<<"-"<<"Dekabr, "<<"Juma";
		else if (n%7==3) cout<<n-334<<"-"<<"Dekabr, "<<"Shanba";
		else if (n%7==4) cout<<n-334<<"-"<<"Dekabr, "<<"Yakshanba";
		else if (n%7==5) cout<<n-334<<"-"<<"Dekabr, "<<"Dushanba";
		else if (n%7==6) cout<<n-334<<"-"<<"Dekabr, "<<"Seshanba";
		else if (n%7==0) cout<<n-334<<"-"<<"Dekabr, "<<"Chorshanba";
	}
}    

