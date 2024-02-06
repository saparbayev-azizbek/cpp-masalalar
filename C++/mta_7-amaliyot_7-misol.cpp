// 7.	Ro'yhat har ikkinchi elementi o'chirilsin.
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


    cout << "Juft indexdagi elementlari o'chirilgan ro'yhat: ";
    for (it = myList.begin(); it != myList.end(); it++) {
    	m ++;
    	if (m % 2 == 1)
        cout << *it << " ";
    }

    return 0;
}

