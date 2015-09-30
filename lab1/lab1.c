#include <stdlib.h>
#include <stdio.h>

// Uses bubble sort to sort the list
void sort(int a[], int size) {
	int i = 0;
  	for(i=0; i < size; i++) {
    	int j = 0;
    	
    	for(j=0; j<size-1; j++) {
			if(a[j+1] < a[j]) {
		 		int temp = a[j]; 
	  			a[j] = a[j+1];
	  			a[j+1] = temp;
			}			
    	}
  	}
}

void printArray(int array[], int size) {
	int i;
	
	for(i = 0; i < size; i++){
		printf("%d ", array[i]);
	}
	printf("\n");
}

int main() {
	
	int numbers[10] = {5, 65, 40, 39, 30, 8, 17, 21, 3, 10};
	printArray(numbers, 10);
	sort(numbers, 10);
	printArray(numbers, 10);
	return 0;
}


