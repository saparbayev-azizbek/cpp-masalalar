 #include<iostream>
using namespace std;
int main()
{
 int n,m;
 cin>>n>>m;
 int a[n+1][m+1];
 for (int i=1; i<=n; i++){
 	for (int j=1; j<=m; j++){
 		cin>>a[i][j];
	 }
}
 for (int i=n; i>=1; i--){
 	for (int j=m; j>=1; j--){
 		cout<<a[i][j]<<" ";
	 }
	 cout<<endl;
}
}
	
