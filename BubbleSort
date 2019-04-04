#include <stdio.h>
//Naomi Nunez Project 2 Bubble Sort

float median(int array1[], int size);
void bubble_sort(int array1[], int size);

main()
{
	int firstRun[10] = {12, 23, 5, 7, 3, 8, 43, 1, 4, 9};
	float med1 = median(firstRun, 10);
	printf("\nMedian Value of first run: %f\n", med1);
	int secondRun[7] = {14, 22, 7, 9, 1, 58, 2};
	float med2 = median(secondRun, 7);
	printf("\nMedian Value of second run: %f\n", med2);
	return 0;
}
//New section
float median(int array1[], int size)
{
	bubble_sort(array1, size);
	float median = 0;
	if (size % 2 == 0)
	{
		median = (array1[(size - 1) / 2] + array1[size / 2]) / 2.0;
	}
	else
	{
		median = array1[size / 2];
	}
	return median;
}
//New section
void bubble_sort(int array1[], int size)
{
	int i, j, temp;
	for(i = 0; i < size; i++)
	{
		for(j = 0; j < size - 1; j++)
		{
			if(array1[j] > array1[j+1])
			{
				temp = array1[j];
				array1[j] = array1[j+1];
				array1[j+1] = temp;
			}
		}
	}
}
