#include<iostream>
using namespace std;
int main(){
	int n,m,s;
	cin>>n>>m;
	double a[n+1][m+1];
	for (int i=1; i<=n; i++){
		for (int j=1; j<=m; j++){
			cin>>a[i][j];
			}
		}
	for (int i=1; i<=m; i++)
	{
		for (int j=1; j<=n; j++)
		{
			s+=a[i][j];
			cout<<s;
		}
	}
}
	
