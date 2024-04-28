#include <iostream>
#include <stack>
using namespace std;
int main()
{
    int n,a;
    stack<int> mystack1;
    stack<int> mystack2;
	cout<<"Elementlari soni : ";
	cin>>n;
	for (int i=1; i<=n; i++)
	{
		cin>>a;
		mystack1.push(a);
	}
    while(!mystack1.empty()) {
        int d = mystack1.top();
        mystack2.push(d);
        mystack1.pop();
    }
    while(!mystack2.empty()) {
        cout << mystack2.top()<<" ";
        mystack2.pop();
    }
}

