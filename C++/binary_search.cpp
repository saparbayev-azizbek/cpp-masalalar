#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
typedef long long ll;
ll a[500000];
ll binsearch(ll a[], ll left, ll right ,ll x) {
     while (right-left > 1) {
             ll middle = (left+right) / 2;
             if (a[middle] > x)
                    right = middle;
             else
                    left = middle;
    }
     if (a[left] == x)
           return left;
     return -1;
}
int main(){
    long long n,p,m;
    cin>>n>>m;
    int b[m+1];
    vector<int> vec;
    for(int i=1;i<=n;i++) {
        cin>>p;
        vec.push_back(p);
    }
     sort(vec.begin(), vec.end());
     for(int i=0;i<n;i++){
        a[i]=vec.at(i);
     }  
    for(int i=1;i<=m;i++) {
        cin>>b[i];
    }
    for(int i=1;i<=m;i++){
        if (binsearch(a,0,n,b[i]) != -1) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
    
}
