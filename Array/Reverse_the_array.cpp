#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[]) {
	int arr[] = {2, 3, 5, 7, 1, 9};
	int len = sizeof(arr)/sizeof(arr[0]), temp;

	for (size_t i = 0; i < len/2; i++) {
		temp = arr[len-1];
		arr[len-1] = arr[i];
		arr[i] = temp;

		len--;
	}

	for(int x : arr) {
		cout<<x<<endl;
	}

	return 0;
}