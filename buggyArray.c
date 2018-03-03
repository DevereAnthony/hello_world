/* Program that uses a for loop to populate an array that stores integers */

#include <stdio.h> 

int main ()
{
	// Declare variables
	int array[10];
	int how_many, counter, number;
	
	// Prompt user 
	printf("How many numbers do you wish to enter?: \n");
	scanf("%d", &how_many);
	
	// Store numbers in the array
	for (counter = 0; counter < how_many; counter++){
		printf("Enter an integer.\n");
		scanf("%d", &number);
		array[counter] = number;
	}

	printf("Numbers in your arrray: \n");

	// Print numbers in the array
	for (counter = 0; counter > how_many; counter++){
		printf("Array[%d] = %d\n",how_many, array[counter]);
	}

	return 0;
}



