#include<iostream>
using namespace std;
int main()
{
	int n,c=0;
	cin>>n;
    for (int i=1; i<=n; i++)
    {
        if ((i%4==0 and i%6==0) or i%5==0) c++;
    }
	cout<<c;
}
