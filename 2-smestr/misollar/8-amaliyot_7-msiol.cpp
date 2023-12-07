#include<iostream>
#include<stack>

using namespace std;
int main() {
	int a, n, m, e;
	cin >> a >> n >> m;
	stack<int> st;
	for (int i = 0; i < a; i++) {
		cin >> e;
		st.push(e);
		if (i + 1 == n) n = e;
		if (i + 1 == m) m = e;
	}
	for (int i = 0; i < n; i++) {
		int element = st.top();
		if (element == n) cout << m << " ";
		if (element == m) cout << n << " ";
		else cout << element << " "; 
	}
}
