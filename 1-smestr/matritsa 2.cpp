#include<iostream>
using namespace std;
int main(){
	int n,m;
	cin>>n>>m;
	int a[n+1][m+1];
	for (int i=1; i<=n; i++){
		for(int j=1; j<=m; j++){
			cin>>a[i][j];
		}
	}
	int s[m+1];
	for (int j=1; j<=m; j++){
		 s[j]=0;
		for (int i=1; i<=n; i++){
			s[j]+=a[i][j];
		}
	}
	for(int j=1; j<=m; j++){
	cout<<s[j]<<" ";
}
	cout<<endl;
	int max=a[1][1];
	for (int i=1; i<=n; i++){
		for(int j=1; j<=m; j++){
			if (max<a[i][j]){
				max=a[i][j];
			}
		}
	}
		int min=a[1][1];
	for (int i=1; i<=n; i++){
		for(int j=1; j<=m; j++){
			if (min>a[i][j]){
				min=a[i][j];
			}
		}
	}
	cout<<max<<" "<<min;
	}
