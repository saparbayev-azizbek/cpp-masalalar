#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<int> arr(n+m);

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for (int i = n; i < n+m; i++) {
        cin >> arr[i];
    }

    sort(arr.begin(), arr.end());

    int d = arr[1] - arr[0]; // calculate common difference
    bool isAP = true;

    for (int i = 2; i < n+m; i++) {
        if (arr[i] - arr[i-1] != d) { // check if common difference is maintained
            isAP = false;
            break;
        }
    }

    if (isAP) {
        cout << "Yes";
    } else {
        cout << "No";
    }

    return 0;
}
