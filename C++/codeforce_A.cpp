#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    bool m = true;
    cin>>a>>b>>c;
    if (c%a==0 or c%b==0) m = true;
    else{
        while(c%b!=0 and c>b)
        {
            c -= a;
        }
    }
    cout<<c;
//    if (c%b==0) m = true;
//    else if (c<a and c<b) m = false;
//    if (m==1) cout<<"Yes";
//    else if (m==0) cout<<"No";
    
}
