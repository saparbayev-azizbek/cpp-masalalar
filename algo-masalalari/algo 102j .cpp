#include<iostream>
using namespace std;
int main()
{
	int n;
	double c,b;
	cin>>n;
	double a[n+1];
	cin>>a[1];
	double min=a[1];
	for (int i=2; i<=n; i++)
	{
		cin>>a[i];
		if (min>a[i])
		{
			min=a[i];
		}
	}
	cin>>c>>b;
	for (int i=c; i<=b; i++){
		printf("%.1f",a[i]/min);
		cout<<" ";
	}	
	for (int i=b+1; i<=n; i++){
		printf("%.1f",a[i]);
		cout<<" ";
	}	
}
