// 9.	Ro'yhat elementlari kamayish tartibida joylashtirilsin.
#include <iostream>
#include <list>

using namespace std;

int main() {
    list<int> myList;
    list<int>::iterator it;
    int n,a; cin >> n;
    for (int i = 1; i <= n; i++) {
    	cin >> a;
    	myList.push_back(a);
	}

    myList.sort();
    myList.reverse();

    cout << "Kamayish tartibida joylashtirilgan ro'yhat: ";
    for (it = myList.begin(); it != myList.end(); it++) {
        cout << *it << " ";
    }

    return 0;
}

