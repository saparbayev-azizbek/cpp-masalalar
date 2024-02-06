#include<iostream>
#include<algorithm>
using namespace std;
int i = 0;
int kasr(int x) {
	i++;
	if (__gcd(i,x) == 1 and i < x) {
		cout << i << "/" << x << " ";
		return kasr(x);
	}
	else if (i < x) return kasr(x);
	else return x;
}
int main() {
	int n;
	cin >> n; 
	int a = kasr(n);
}
