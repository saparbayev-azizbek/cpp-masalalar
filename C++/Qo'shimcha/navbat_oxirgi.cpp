#include<iostream>
#include<queue>
using namespace std;
int main() {
	int n,a,en,mx;
	cin>>n;
	queue<int> nv;
	cin>>a;
	mx = a;
	nv.push(a);
	for(int i = 2; i <= n; i++) {
		cin>>a;
		nv.push(a);
		if (a > mx) mx = a;
	}
	for(int i = 1; i <= n; i++) {
		int el = nv.front();
		if (el != mx) {
			cout<<el<<" ";
			nv.pop();
		}
		else {
			nv.pop();
		}
	}
}
