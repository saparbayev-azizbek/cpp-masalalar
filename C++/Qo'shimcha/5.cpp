#include <bits/stdc++.h>
using namespace std;
int main(){
  string s;
  cin>>s;
  string kalit;
  cin>>kalit;
  vector<char> m;
  for(int i = 65; i<=90; i++){
    char k = i;
    m.push_back(k);
  }
  m.push_back('#');
  m.push_back('!');
  m.push_back('_');
  m.push_back('@');
  m.push_back('?');
  m.push_back('*');
  vector<string>ikkilik = {"00000","00001","00010","00011","00100","00101","00110","00111","01000","01001","01010","01011","01100","01101","01110","01111","10000","10001","10010","10011","10100","10101","10110","10111","11000","11001","11010","11011","11100","11101","11110","11111"};
  vector<string>s1;
  vector<string>s2;
  for(int i = 0; i<s.length(); i++){
    int k = s[i];
    if(k>=65 && k<=90){
      s1.push_back(ikkilik[k-65]);
    }
    if(s[i]=='#'){
      s1.push_back(ikkilik[26]);
    }
    if(s[i]=='!'){
      s1.push_back(ikkilik[27]);
    }
    if(s[i]=='_'){
      s1.push_back(ikkilik[28]);
    }
    if(s[i]=='@'){
      s1.push_back(ikkilik[29]);
    }
    if(s[i]=='?'){
      s1.push_back(ikkilik[30]);
    }
    if(s[i]=='*'){
      s1.push_back(ikkilik[31]);
    }
  }
  for(int i = 0; i<kalit.length(); i++){
    int t = kalit[i];
    if(t>=65 && t<=90){
      s2.push_back(ikkilik[t-65]);
    }
    if(kalit[i]=='#'){
      s2.push_back(ikkilik[26]);
    }
    if(kalit[i]=='!'){
      s2.push_back(ikkilik[27]);
    }
    if(kalit[i]=='_'){
      s2.push_back(ikkilik[28]);
    }
    if(kalit[i]=='@'){
      s2.push_back(ikkilik[29]);
    }
    if(kalit[i]=='?'){
      s2.push_back(ikkilik[30]);
    }
    if(kalit[i]=='*'){
      s2.push_back(ikkilik[31]);
    }
  }
  /*for(int i = 0; i<s1.size(); i++){
    cout<<s1[i]<<" ";
  }*/
  /*cout<<endl;
  for(int i = 0; i<s2.size(); i++){
    cout<<s2[i]<<" ";
  }*/
  string g = "";
  vector<string>asosiy;
  for(int i = 0; i<s1.size(); i++){
    string x = s1[i];
    string y = s2[i];
    for(int j = 0; j<=4; j++){
      int a = (x[j]-48);
      int b = (y[j]-48);
      int d = a xor b;
      string l = to_string(d);
      g+=l;
    }
    asosiy.push_back(g);
    g="";
  }
  /*cout<<endl;
  for(int i = 0; i<asosiy.size(); i++){
    cout<<asosiy[i]<<" ";
  }*/
  string Shifrlangan_soz = "";
  int z = 0;
  while(z<s.length()){
    for(int i = 0; i<ikkilik.size(); i++){
      if(asosiy[z]==ikkilik[i]){
        Shifrlangan_soz+=m[i];
        break;
      }
    }
    z++;
  }
  cout<<Shifrlangan_soz;
}//Kiberxavfsizlik shifrlash
