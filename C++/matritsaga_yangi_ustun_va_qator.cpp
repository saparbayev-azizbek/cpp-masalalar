#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	double a[n+1][n+1], b[n+2][n+2], row[n+1], column[n+1];
	for (int i=1; i<=n; i++){
		for (int j=1; j<=n; j++){
			cin>>a[i][j];
		}
	}
	cout << "\nQator elementlarini kiriting ("<<n<<" ta):\n";
	for (int i=1; i<=n; i++){
		cin>>row[i];
	}
	cout << "Ustun elementlarini kiriting ("<<n+1<<" ta):\n";
	for (int i=1; i<=n+1; i++){
		cin>>column[i];
	}
	cout<<"\n\nYangi matritsa elementlari:\n\n";
	for (int i=1; i<=n+1; i++){
		for (int j=1; j<=n+1; j++){
			if (i<=n and j<=n)
				cout<<a[i][j]<<" ";
			else if (j==n+1) {
				cout<<column[i]<<endl;
			}
			else if (i==n+1){
				cout<<row[j]<<" ";
			}
		}
	}
}
	
