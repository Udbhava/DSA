package Array;

public class ReverseTheArray {
	public static void main(String[] args) {
		int arr[] = {2, 3, 5, 7, 1, 9};
		int len = arr.length, temp;

		for (int i = 0; i < len/2; i++) {
			temp = arr[len-1];
			arr[len-1] = arr[i];
			arr[i] = temp;
			len--;
		}

		for (int x : arr) {
			System.out.print(x + " ");
		}
	}
}