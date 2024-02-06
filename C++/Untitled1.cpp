// 4.	Stekning juft o'rinda turgan elementlari o"chirilsin.

#include <iostream>
#include <stack>

using namespace std;

int main() {
    stack<int> myStack;

    myStack.push(10);
    myStack.push(20);
    myStack.push(30);

	for(int i = 1; i <= 3; i++){
		if (i % 2 == 0) myStack.pop();
		else{
			cout<<myStack.top()<< " ";
			myStack.pop();
		}  
	}

    return 0;
}

