#include<iostream>
using namespace std;
typedef long long ll;
ll funk(ll n){
ll s=0;
for(ll i=1;i*i<=n;i++){
	if(n%i==0){
		s++;
		if(i*i!=n){
			s++;
		}
	}
}
return s;
}
int main()
{
  ll n;
    cin >> n;
    	for (ll i = 1; i < 5000; i++) {
         if(n==funk(i)){
         	cout<<i<<endl;
         	return 0;
		 }
		}
}
