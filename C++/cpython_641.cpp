#include<iostream>
using namespace std;
int main()
{
    long long n,s = 1;
    cin >> n;
    if (n == 1) cout << "1";
    else {
    	for (int i = 1; i < n; i++) {
    		s *= 2;
		}
        cout << s;
    }
}
