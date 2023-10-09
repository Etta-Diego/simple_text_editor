#include "main.h"
//#include <stdio.h>
//#include <string.h>
//#define MAX 100


void searchString(char array[MAX][max], char stringToSearch[max], int size)
{

	int found, index;

	printf("Enter the word to be searched\n");
	scanf("%s", stringToSearch);


	/* Traverse through the array and check if there is a match */
	found = 0;
	for (index = 0; index < size; index++)
	{
		if ((strcmp(stringToSearch, array[index]) == 0))
		{
			found = 1;
			break;
		}
	}

	/* Print output based on the flag check */
	if (!found)
	{
		printf("%s does not exist in the array\n", stringToSearch);
	}
	else
	{
		printf("The word %s exists in the array\n", stringToSearch);
	}

}
