#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<int >v;
    int n,a,m;
   cin>>n;
   for(int i=0; i<n;i++){
    cin>>a;
    v.push(a);
   }
   cin>>m;
   int s=0;
   while(!v.empty()){
   if (v.top()>m){
    s+=v.top();
    }
    v.pop();
    
   }
   cout<<s; 
    
}

