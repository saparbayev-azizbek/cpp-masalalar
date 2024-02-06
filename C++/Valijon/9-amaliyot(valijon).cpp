/*
5.		
class sportchilar: 
	FIO, 
	daromadi,
	yoshi	
class tennischilar:
	bo'y_uzunligi,
Vector konteyneridan foydalanib
tennischilarni ro'yxatida  bo'y_uzunligi bo'yicha saralang

*/
#include <iostream>
#include <fstream>
using namespace std;

class sportchilar{
  public:
    string FIO;
    int daromad,yosh;
};

class tennischilar: public sportchilar{
  private:
    int boy;
  public:
      tennischilar(){};
  tennischilar(string p, int t, int ok, int ys){
        FIO = p;
        daromad = t;
        yosh = ok;
        boy = ys;
      }
  static void sort(tennischilar* s4,int n){
    for(int i = 0; i<n; i++){
      for(int j = i+1; j<n; j++){
        if(s4[i].boy>s4[j].boy){
          swap(s4[i],s4[j]);
        }
      }
    }
  }
  void print()
  {
    cout<<"Tennischi FIOsi : "<<FIO<<endl<<"Daromadi : "<<daromad<<endl<<"Yoshi : "<<yosh<<endl<<"Bo'y uzunligi : "<<boy<<endl;
  }  
};
int main(){
  int n;
  ifstream fin("sportchilar.txt");
  fin>>n;
  tennischilar* s4;
  s4 = new tennischilar[n];
  for(int i = 0; i<n; i++){
    string n;
    int t,ok,ys;
    fin>>n>>t>>ok>>ys;
    s4[i]=tennischilar(n,t,ok,ys);
  }
  cout<<"Bo'yi uzunligi bo'yicha saralangan tennischilar :\n"<<endl;
  s4[0].sort(s4,n);
  for(int i = 0; i<n; i++){
    s4[i].print();
  }
}
