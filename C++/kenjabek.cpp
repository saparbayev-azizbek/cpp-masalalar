#include<iostream>
#include<math.h>

using namespace std;
bool tub(int x)
{
	bool m=true;
	if (x<2) m=false;
	if (x==2) m=true;
	for(int i=2; i*i<=x; i++)
	{
		if (x%i==0) m=false;
	}
	return m;
}
int main (){
	int n,i;
	cin>>n;
	int a[n+1];
	for(i=1; i<=n;i++){
		a[i]=i;
	}
	for(i=1; i<=n;i++){
		if(tub(a[i])==true)
		{
			cout<<a[i]<<" tub soni "<<i<<" - indexda"<<endl;
		}
	}
}
