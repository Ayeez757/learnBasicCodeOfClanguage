#include<stdio.h>
#define SIZE 5

void main() {

	int arr[SIZE] = {5,23,7,54,98};
	for (int i = 0;i <= SIZE; i++) {
		for (int j =i;j <= SIZE;j++) {		
			if (arr[i] < arr[j]) {

				int temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}

	for (int i = 0;i < SIZE;i++) {
	
		printf("%d", arr[i]);
		printf("%s", ",");
		
	}
}

