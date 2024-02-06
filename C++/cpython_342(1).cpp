#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	long long a,d,s;
	int n;
	cin>>a>>d>>s;
	long long D = pow((2*a - d),2) - 8*d*s;
	n = (-2*a + d + sqrt(D)/(2*s));
	if (n>0)
	{
		cout<<n;
	}
	else cout<<0;
}
//x = int(input())
//y = int(input())
//q = int(input())
//
//D = (2*x - y)**2- 8*y*q
//
//n = (y - 2*x + int(abs(D**0.5)))/(2*y)
//if n > 0:
//    n = n//1
//    n = int(n)
//    print(n)
//else:
//    print(0)
