#include<iostream>
using namespace std;
bool tub(int x) {
	bool m = true;
	for (int i = 2; i*i <= x; i++) {
		if (x % i == 0) m = false;
	}
	return m;
}
int main() {
	for (int i = 101; i <= 999; i++) {
		if (tub(i) == 1 and tub(i + 2) == 1) {
			cout << i << " " << i + 2 << endl;
		}
	}
}
