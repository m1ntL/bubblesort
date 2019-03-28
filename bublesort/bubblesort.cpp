// bubblesort.cpp :
// implemented with callback function
//sort a number array ascending

#include "pch.h"
#include <iostream>

int compare_int (const void *p1, const void *p2)
{
	return *((int*)p1) > *((int*)p2) ? 1 : *((int*)p1) < *((int*)p2) ? -1 : 0;
}

void swap(int &a, int &b)
{
	int temp = a;
	a = b;
	b = temp;
}

void myBubbleSort (int* arr, int len, int(*compare_int) (const void*, const void*))
{
	for (int i = 0; i < len - 1; i++)
	{
		for (int j = 0; j < len - 1 - i; j++)
		{
			if (compare_int ((int*)(arr + j), (int*)(arr + j + 1) ) < 0)
			{
				swap (*(arr + j), *(arr + j + 1));
			}
		}
	}
	
}

int main()
{
	int arr[] = { 8, 55, 42, 79, 3, 76, 12, 0 };
	int len = sizeof (arr) / sizeof (arr[0]);
	myBubbleSort (arr, len, compare_int);
	std::cout << std::endl;
	for (int i = 0; i < len; i++)
	{
		std::cout << arr[i] << " ";
	}
}


