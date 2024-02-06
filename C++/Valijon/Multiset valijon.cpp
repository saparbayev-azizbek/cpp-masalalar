/*
5.	 R to'plam (multiset) berilgan. 
D to'plamga uning maksimal va minimal qiymatlaridan 
tashqari bo'lgan qiymatlarini yozadigan dastur tuzing.
*/
#include<iostream>
#include<set>

using namespace std;
int main(){
   multiset<int> s;
   multiset<int>::iterator v;
   cout<<"N=";
   int n,m;
   cin>>n;
   for(int i=0;i<n;i++){
     cout<<i<<"-elementi:=>";
     cin>>m;
     s.insert(m);
   } int p[n],i=0;
    for(v=s.begin();v!=s.end();v++){
    i++;
  p[i]=*v;  
  }
  int max=p[n],min=p[1];
  v=s.find(max);
  s.erase(v);
  v=s.find(min);
     s.erase(v);
  for(v=s.begin();v!=s.end();v++){
    cout<<*v<<endl;
  }
}
