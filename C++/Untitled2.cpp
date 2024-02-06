// 5.	Stek o"rtasiga '*' belgi joylashtirilsin
#include <iostream>
#include <stack>

using namespace std;

int main() {
    stack<int> myStack;

    myStack.push(10);
    myStack.push(20);
    myStack.push(30);
    myStack.push(11);
    myStack.push(50);
    myStack.push(34);
    
    int size = myStack.size();

	for(int i = 1; i <= size; i++){
		if (i == size/2){
			cout <<myStack.top()<< " * ";
			myStack.pop();
		} 
		else{
			cout<<myStack.top()<< " ";
			myStack.pop();
		}  
	}

    return 0;
}

