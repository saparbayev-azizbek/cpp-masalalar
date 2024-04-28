#include<iostream>
#include<math.h>
using namespace std;
int main() {
    int a,b,N=10;
    cin >> a >> b;
    float s=10, h=(b-a)/10.;
    for(float i = a + h/2.; i < b; i += h) {
        s += (i/sqrt(2*i*i+5));
    }
    s = h*s;
    cout << s;
}
