#include <stdio.h>
//Naomi Nunez
//Parity Bits
int main ()
{
	//Initializing variables to be used
	int numb, number, sum = 0, left, need;
	printf("Please input a number: \n");
	scanf("%d", &numb);
	
	number = numb;
	//To add individual digits from user input
	while (number != 0)
	{
		left = number % 10;
		sum = sum + left;
		number = number / 10;
	}
	printf("Sum of input: %d\n", sum);
	//Incrimenting if needed
	if(sum % 9 != 0)
	{
		for(need = 0; sum % 9 != 0 && need < 4; need++)
		{
			sum = sum + need;
		}
	
	}
	//printing
	printf("Parity Digit: %d\n", need);
	printf("New Number: %d%d\n", numb, need);
	return 0;
}
