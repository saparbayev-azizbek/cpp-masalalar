#include<iostream>
using namespace std;
int main()
{
    int n,m,k;
    cin >> n >> m;
    int a[n][m], b[n+1], c[n][m+1];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }
    cin >> k;
    for (int i = 0; i < n; i++) {
        cin >> b[i];
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < k-1; j++) {
            c[i][j] = a[i][j];
        }
    }
    for (int i = 0; i < n; i++)
        c[i][k-1] = b[i];
    for (int i = 0; i < n; i++) {
        for (int j = k-1; j < m; j++) {
            c[i][j+1] = a[i][j];
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= m; j++) {
            cout << c[i][j] << " ";
        }
        cout << endl;
    }
}
