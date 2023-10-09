#include "main.h"

void sortStrings(char str[MAX][max], int size)
{
	char temp[MAX];
	int index, index1;

/* Travers through the string array and sort the strings accordingly */
	for (index = 0; index < size; index++)
	{
		for (index1 = index + 1; index1 < size; index1++) 
		{
			if (caseInsensitiveStrcmp(str[index], str[index1]) > 0)
			{
				strcpy(temp, str[index1]);
				strcpy(str[index1], str[index]);
				strcpy(str[index], temp);
			}
		}
	}

/* Prints out the sorted array  */
printf("The sorted strings are as follows:\n");
	for (index = 0; index < size; index++)
	{
		printf("%s\n", str[index]);
	}
}
