#include<iostream>
using namespace std;
int summ(int x) {
	int s = 0;
	while(x > 9) {
		s += x % 10;
		x /= 10;
	}
	return s + x;
}
int main() {
	int a,b;
	cin >> a >> b;
	if (summ(a) > summ(b)) cout << a;
	else	cout << b;
}
