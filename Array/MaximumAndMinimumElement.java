package Array;

public class MaximumAndMinimumElement {
	public static void main(String[] args) {
		int arr[] = { 100, 11, 445, 7, 330, 300 };
		int len = arr.length, max = arr[0], min = arr[0];

			for (int i = 1; i < len; i++) {
			if (max < arr[i])
				max = arr[i];

			else if (min > arr[i])
				min = arr[i];
		}

		System.out.println("min = " + min);
		System.out.println("max = " + max);
	}
}