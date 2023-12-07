#include<iostream>
#include<list>
#include<math.h>
using namespace std;
void print (list<int> n)
{
  double s=1, k=0;
  while(!n.empty()){
    if(n.front()>0){
      s*=n.front();
      k++;
      
    }
    n.pop_front();
  }
   if (k>0)
	{
		cout<<"Musbat elementlari o`rta geometrigi : ";
   		printf("%.2f",pow(s,1.0/k));
	}
  else 
  {
    cout<<"Musbat elementi mavjud emas";
  }
}
int main()
{
  list <int> h;
  int t,a;
  cout<<"Elementlar sonini kiriting : ";
  cin>>t;
  for (int i=0; i<t; i++)
  {
    cout<<i+1<<" - element : ";
    cin>>a;
    h.push_back(a);
  }
  print(h);
}
