#include <iostream>
using namespace std;
int main() 
{
    long long first, extra, summ;
    cin >> first >> extra >> summ;
    int c = 0;

    if (summ - first >= 0) {
        c = c + 1;
        summ = summ - first;
    }

    if (summ >= (first + extra)) {
        while (summ >= (first + extra)) {
            c = c + 1;
            first = first + extra;
            summ = summ - first;
        }
    }

    cout << c ;

    return 0;
}

