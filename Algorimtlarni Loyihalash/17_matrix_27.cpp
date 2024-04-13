#include <iostream>
using namespace std;
int main()
{
    int n,m;
    cin >> n >> m;
    int a[n][m];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }
     for (int i = 0; i < n; i++) {
        for (int j = 0; j < m-1; j++) {
            for (int k = j; k < m; k++) {
                if (a[i][j] > a[i][k]) {
                    int l = a[i][j];
                    a[i][j] = a[i][k];
                    a[i][k] = l;
                }
            }
        }
    }
    int l,k, c[n],d[n];
    cin >> k >> l;
    for(int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            c[j] = a[k-1][j];
            d[j] = a[l-1][j];
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (i == k-1)
                cout << d[j] << " ";
            else if (i == l-1)
                cout << c[j] << " ";
            else cout << a[i][j] << " ";
        }
        cout << endl;
    }
}
