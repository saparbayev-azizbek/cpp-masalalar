// 4.	Navbat o'rtasiga '+' belgi joylashtirilsin
#include<iostream>
#include<queue>
using namespace std;
int main() 
{
	queue<string> navbat;
	int n,a;
	cin >> n;
	for(int i = 0; i < n; i++) {
		cin >> a;
		if (i == n/2) navbat.push("+");
		navbat.push(a);
	}
	for (int i = 0; i < n; i++) {
		cout << navbat.front() << " "
		navbat.pop()
	}
}
