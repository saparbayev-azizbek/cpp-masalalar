#include <bits/stdc++.h>
using namespace std;
vector<int> firstVector;
vector<int> secondVector;
void generateVectors(vector<int>& firstVector, vector<int>& secondVector) {
    for (int i = 1; i <= 30; ++i) {
        firstVector.push_back(i);
        secondVector.push_back(i);
    }

    random_device rd;
    mt19937 g(rd());
    shuffle(secondVector.begin(), secondVector.end(), g);
    random_device rdr;
    mt19937 p(rdr());
    shuffle(firstVector.begin(), firstVector.end(), p);
}

int qidiruv(vector<int>m, int x){
  for(int i = 0; i<m.size(); i++){
    if(m[i]==x){
      return i;
      break;
    }
  }
}
int main() {
  string s;
  cin>>s;

    generateVectors(firstVector, secondVector);

    int h = 0,b = 0;
    vector<char>k1;
    vector<char>k2;
    for(int i = 0; i<firstVector.size(); i++){
      if(firstVector[i]>=1 && firstVector[i]<=26){
        char r = firstVector[i]+64;
        cout<<r<<" ";
        k1.push_back(r);
    }
    if(firstVector[i]==27){
      cout<<"#"<<" ";
      char q = '#';
      k1.push_back(q);
    }
    if(firstVector[i]==28){
      cout<<"@"<<" ";
      char q = '@';
      k1.push_back(q);
    }
    if(firstVector[i]==29){
      cout<<"!"<<" ";
      char q = '!';
      k1.push_back(q);
    }
    if(firstVector[i]==30){
      cout<<"*"<<" ";
      char q = '*';
      k1.push_back(q);
    }
    h++;
    if(h%6==0){
      cout<<endl;
    }
  }
  cout<<endl;
  for(int i = 0; i<secondVector.size(); i++){
      if(secondVector[i]>=1 && secondVector[i]<=26){
        char r = secondVector[i]+64;
        cout<<r<<" ";
        k2.push_back(r);
    }
    if(secondVector[i]==27){
      cout<<"#"<<" ";
      char q = '#';
      k2.push_back(q);
    }
    if(secondVector[i]==28){
      cout<<"@"<<" ";
      char q = '@';
      k2.push_back(q);
    }
    if(secondVector[i]==29){
      cout<<"!"<<" ";
      char q = '!';
      k2.push_back(q);
    }
    if(secondVector[i]==30){
      cout<<"*"<<" ";
      char q = '*';
      k2.push_back(q);
    }
    b++;
    if(b%6==0){
      cout<<endl;
    }
  }
  cout<<endl<<"Shifrlangan so'z : ";
  for(int i = 0; i<s.length(); i++){
    int asci = s[i]-64;
    if(i%2==0){
      int j = qidiruv(firstVector, asci);
      cout<<k2[j];
    }
    if(i%2==1){
      int j = qidiruv(secondVector, asci);
      cout<<k1[j];
    }
  }
  /*cout<<qidiruv(firstVector, 1);*/
}//Kiber shifr 4
