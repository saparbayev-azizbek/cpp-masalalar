#include <iostream>
#include <deque>
#include <stack>

using namespace std;

int main() {
    deque<int> myDeque = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    deque<int> toqDeque, juftDeque;
    for (int element : myDeque) {
        if (element % 2 == 0) {
            juftDeque.push_back(element);
        } else {
            toqDeque.push_back(element);
        }
    }

    stack<int> juftStack;
    while (!juftDeque.empty()) {
        juftStack.push(juftDeque.back());
        juftDeque.pop_back();
    }

    cout << "Toq elementlari (Deque): ";
    for (int element : toqDeque) {
        cout << element << " ";
    }

    cout << "\nJuft elementlari (Stack): ";
    while (!juftStack.empty()) {
        cout << juftStack.top() << " ";
        juftStack.pop();
    }

    return 0;
}

