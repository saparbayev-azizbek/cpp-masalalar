#include<iostream>
using namespace std;
int arr[2000];
int qsort(int arr[], int chap, int ong) {
	int markaz = (chap + ong) / 2;
	int k = 0, c = 0, kichik[1000], katta[1000];
	for (int i = 0; i < ong; i++) {
		if (arr[i] < arr[markaz]) {
			k++;
			kichik[k] = arr[i];
		}
		if (arr[i] > arr[markaz]) {
			c++;
			kichik[c] = arr[i];
		}
	}
	return qsort(kichik, 0, k) + arr[markaz] + qsort(katta, 0, c);
}
int main()
{
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	int b[n + 1] = qsort(arr, 0, n);
	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}
}
