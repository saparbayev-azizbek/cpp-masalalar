#include<bits/stdc++.h>
using namespace std;
typedef long ll;
int main() {
    ll n;
    cin>>n;
    ll t=sqrt(n);
    ll s=0,k=3;
    for(ll j=1; j<t; j++) {
        s+=j*k;
        k+=2;
    }
    if(t*t==n) {
        s+=t;
    } else {
        s+=(n-(t*t-1))*t;
    }
    cout<<s;
}
