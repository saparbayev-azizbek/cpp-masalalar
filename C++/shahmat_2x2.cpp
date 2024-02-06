#include <iostream>


using namespace std;

int main()
{
    int n,m;
    cin >> n >> m;
    int a[n+1][m+1],dp[n+1][m+1];
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            cin >> a[i][j];
        }
    }
    dp[1][1] = a[1][1];
    for (int i = 2; i <= n; i++) {
        dp[1][i] = dp[1][i - 1] + a[1][i];
    }
    for (int i = 2; i <= m; i++) {
        dp[i][1] = dp[i - 1][1] + a[i][1];
    }
    for (int i = 2; i <= n; i++) {
        for (int j = 2; j <= m; j++) {
            dp[i][j] = min(dp[i - 1][j], dp[i][j - 1]) + a[i][j];
        }
    }
    cout << dp[n][m];

    return 0;
}
