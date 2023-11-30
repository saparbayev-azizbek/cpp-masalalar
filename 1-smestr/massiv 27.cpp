#include <iostream>
#include <math.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n + 1];
    for (int i = 1; i <= n; i++)
	{
        cin >> a[i];
    }
    int min=a[0];
    for (int i=1; i<=n; i++)
    {
    	if (a[i]<min)
    	{
    		min=a[i];
		}
	}
	for (int i=1; i<=n; i++)
	{
		if (a[i]<0)
		{
			a[i]=min*min;
		}
		cout<<a[i]<<" ";
	}
  
  }
