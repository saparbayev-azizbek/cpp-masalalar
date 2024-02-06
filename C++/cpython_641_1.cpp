#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,s = 0, q = 0;
    cin >> a;
    string c;
    s = a / 97;
    q = a % 97;
    for (int i = 1; i <= s; i++) {
        cout << "a";
    }
    if (q > 0) {
    	char d = q;
    	cout << d;
	}
}
