#include <bits/stdc++.h>
using namespace std;
int funk(vector<int>& v) {
    int n = v.size();
    sort(v.begin(), v.end());
    int maxx = -INT_MAX;
    if (n >= 3) {
        maxx = max(maxx, v[n-1]*v[n-2]*v[n-3]);
        if (v[0] < 0 && v[1] < 0) {
            maxx = max(maxx, v[0]*v[1]*v[n-1]);
        }
    }
    return maxx;
}
int main() {
    int n;
    cin >> n;
    vector<int> v(n, 0);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    if(funk(v)!=-INT_MAX){
    cout << funk(v) << endl;
    return 0;}
}
