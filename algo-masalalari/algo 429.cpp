#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int a,b;
	int n=0,m=0;
	cin>>a>>b;
	int c[a+1][b+1];
	for (int i=1; i<=a; i++)
	{
		for (int j=1; j<=b; j++)
		{
			cin>>c[i][j];
		}
	}
	int max=c[1][1],min=c[1][1];
	for (int i=1; i<=a; i++)
	{
		for (int j=1; j<=b; j++)
		{
			if (c[i][j]>max)
			{
				max=c[i][j];
			}
			if (c[i][j]<min)
			{
				min=c[i][j];
			}
		}
	}
	for (int i=1; i<=a; i++)
	{
		for (int j=1; j<=b; j++)
		{
			if (c[i][j]==max)
			{
				n++;
			}
			if (c[i][j]==min)
			{
				m++;
			}
		}
	}
	cout<<max<<" "<<n<<" "<<min<<" "<<m<<endl;
	cout<<max*n+min*m;
}
