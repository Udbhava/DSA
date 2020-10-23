#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[]) {
	int arr[] = { 100, 11, 445, 1, 330, 300 };
	int len = sizeof(arr)/sizeof(arr[0]), max = arr[0], min = arr[0];

	for (size_t i = 1; i < len; i++) {
		if (max < arr[i])
			max = arr[i];

		else if (min > arr[i])
			min = arr[i];
	}

	cout<<"min = "<< min << endl;
	cout<<"max = "<< max << endl;
	return 0;
}