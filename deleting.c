#include <stdio.h>
#include <string.h>
#define MAX 100

int main()
{

	char arr[MAX][MAX];
	char value[20];
	int index, size, pos;


	printf("Insert the size of your array: ");
	scanf("%d", &size);

	printf("Insert the string for the array\n");
	for (index = 0; index < size; index++)
	{
		printf("Word[%d]: ", index + 1);
		scanf("%s", arr[index]);
	}
	printf("Enter the position of the string to delete: ");
	scanf("%d", &pos);

	pos++;

	for (index = pos; index < size; index++)
	{
		strcpy(arr[index], arr[index + 1]);
	}
size--;
	//strcpy(arr[pos], value);
	

	printf("The updated string contents are as follows: \n");
	for (index = 0; index < size; index++)
	{
		printf("Word[%d]: %s\n", index + 1, arr[index]);
	}

	return 0;
} 
