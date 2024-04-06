#include<iostream>
using namespace std;
int main(){
	int n,m,x,y;
	cin>>n>>m;
	double a[n+1][m+1];
	for (int i=1; i<=n; i++){
		for (int j=1; j<=m; j++){
			cin>>a[i][j];
			if (a[i][j]<0){
				x=i;
				y=j;
			}
		}
	}
	cout << "\nYangi matritsa elementlari:\n\n";
	for (int i=1; i<=n; i++){
		for (int j=1; j<=m; j++){
			if (i!=x and j!=y)	
				cout<<a[i][j]<<" ";
		}
		if (i!=x)	
			cout<<endl;
	}
}
