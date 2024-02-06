#include<iostream>
using namespace std;
int main()
{
	int n1, m1, n2, m2;
	cin >> n1 >> m1;
	int a[n1 + 1][m1 + 1];
	for (int i = 1; i <= n1; i++) {
		for (int j = 1; j <= m1; j++) {
			cin >> a[i][j];
		}
	}
	cin >> n2 >> m2;
	int b[n2 + 1][m2 + 1];
	for (int i = 1; i <= n2; i++) {
		for (int j = 1; j <= m2; j++) {
			cin >> b[i][j];
		}
	}
	int c[n1 + 1][m2 + 1];
	for (int i = 1; i <= n1; i++) {
		for (int j = 1; j <= m2; j++) {
			c[i][j] = 0;
		}
	}
	for (int i = 1; i <= n1; i++) {
		for (int j = 1; j <= m2; j++) {
			for (int k = 1; k <= n2; k++) {
				c[i][j] = c[i][j] + a[i][k]*b[k][j];
			}
		}
	}
	for (int i = 1; i <= n1; i++) {
		for (int j = 1; j <= m2; j++) {
			cout << c[i][j] << " ";
		}
		cout << endl;
	}
}
