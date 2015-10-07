#include <stdlib.h>
#include <stdio.h>

int main() {
	int size = 10;
	int numbers[10] = {5, 65, 40, 39, 30, 8, 17, 21, 3, 10};
	
	int i = 0;
  	for(i=0; i < size; i++) {
    	int j = 0;
    	
    	for(j=0; j<size-1; j++) {
			if(numbers[j+1] < numbers[j]) {
		 		int temp = numbers[j]; 
	  			numbers[j] = numbers[j+1];
	  			numbers[j+1] = temp;
			}			
    	}
  	}
	return 0;
}


