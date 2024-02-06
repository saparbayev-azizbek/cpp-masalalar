#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
bool sortbysec(const pair<int,int> &a,
              const pair<int,int> &b)
{
    return (a.second < b.second);
}
int soni(int n)
{
	int cnt = 0,s = 1,k=0;
		while(n%2==0)
		{
			k++;
			n /= 2;
		}
		for (int i = 3; i*i <= n; i++) {
			while (n % i == 0) {
				n /= i;
				cnt++;
			}
			s *= cnt + 1; 
			cnt = 0;
		}
		if (n>2) return s*(k+1)*2;
	return s*(k+1);
}

int main()
{
    int n;
    cin>>n;
    int a[n+1];
    vector<pair<int,int> > vec;
    vector<int> v;
    for (int i=1; i<=n; i++)
    {
        cin>>a[i];
        int y = soni(a[i]);
        vec.push_back(make_pair(a[i],y));
    }
    sort(vec.begin(), vec.end(), sortbysec);
    int m = vec[n-1].second;
    for (int i=0; i<n; i++)
    {
        if (vec[i].second==m)
        {
            v.push_back(vec[i].first);
        }
    }
    sort(v.begin(), v.end());
    int c = v.size();
    cout<<v[c-1];
}
