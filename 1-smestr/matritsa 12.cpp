#include<iostream>
using namespace std;
int main(){
	int n,m;
	cin>>n>>m;
	double a[n+1][m+1];
	for (int i=1; i<=n; i++){
		for(int j=1; j<=m; j++){
			cin>>a[i][j];
		}
	}
	int k,l;
	cin>>k>>l;
	double s=0,d=0;
	for (int i=1; i<=n; i++){
		for(int j=1; j<=m; j++){
			if (a[i][j]>=k and a[i][j]<=l){
				s+=a[i][j];
				d++;
			}
		}
	}
	printf("%.2f",s/d);
}
