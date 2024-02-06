#include <bits/stdc++.h>

int summ(int x) {
    int s = 0;
    if (std::to_string(x).length() < 2) {
        return x;
    } else {
        s += x % 10;
        x = x / 10;
        return summ(s);
    }
}

int main() {
    int x;
    std::cout << "Enter a number: ";
    std::cin >> x;
    int result = summ(x);
    std::cout << "Sum of digits: " << result << std::endl;
    return 0;
}

