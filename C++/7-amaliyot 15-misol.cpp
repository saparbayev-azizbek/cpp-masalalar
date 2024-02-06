#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;
 
int main()
{
	int n,t;
	vector <int> myvector;
	cout<<"Elementlar soni : "; cin>>n;
	for (int i=1; i<=n; i++)
	{
		cin>>t;
		myvector.push_back(t);
	}
	
	rotate(myvector.begin(), myvector.begin()+3, myvector.end());
	vector<int>::iterator it;
	
	cout<<"Qayta tartiblangan to`plam elemantlari : \n";
	for(it=myvector.begin(); it!=myvector.end(); ++it)
	{
		cout<<*it<<" ";
	}
	
	return 0;
}
