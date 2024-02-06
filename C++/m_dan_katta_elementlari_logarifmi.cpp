#include <iostream>
#include <math.h>
using namespace std;
int main() {
	int n,m,p=1;
	cin >> n;
	int a[n + 1];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	cin >> m;
	for (int i = 0; i < n; i++) {
		if (a[i] > m) p *= a[i];
	}
	cout << log(p);
}
