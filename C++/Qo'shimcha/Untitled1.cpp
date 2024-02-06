#include<iostream>
#include<math.h>
using namespace std;
int main() {
	int a;
	double x;
	cin >> a>> x;
	double tt=1.*(sqrt(x-1)+sqrt(x+2)+log10(sqrt(a*x*x+2)))/pow(sqrt(x+2)+sqrt(x+24)+x*x*x*x*x,1./2);
	printf("%.2f",tt);
}
