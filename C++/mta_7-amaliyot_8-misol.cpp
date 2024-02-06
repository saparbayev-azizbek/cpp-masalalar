// 8.	Ro'yhat har uchinchi elementi o'chirilsin.
#include <iostream>
#include <list>

using namespace std;

int main() {
    list<int> myList;
    list<int>::iterator it;
    int n,a,m = 0; cin >> n;
    for (int i = 1; i <= n; i++) {
    	cin >> a;
    	myList.push_back(a);
	}


    cout << "Har uchinchi indexdagi elementi o'chirilgan ro'yhat: ";
    for (it = myList.begin(); it != myList.end(); it++) {
    	m ++;
    	if (m % 3 != 0)
        cout << *it << " ";
    }

    return 0;
}

