#include "main.h"


int main()
{
	int length, index, input; 
	char text[MAX][max], search[max], repeat;
	bool another_one;

	printf("\n\n\t\t\tWELCOME TO OUR SIMPLE TEXT EDITOR\nEnter the size of the array: ");
	scanf("%d", &length);

	if (length <= 0 || length > MAX)
	{
		printf("\n\n\t\t\t\t\t\tERROR!\n");
		printf("The array size entered might be out of bounds or exceeds the maximum size.\nTRY AGAIN!\n"); 
		return 1;
	}

	printf("Insert Strings:\n");
	for (index = 0; index < length; index++)
	{
		printf("Word[%d]: ", index + 1);
		scanf("%s", text[index]);
	}
	another_one = true;

	while (another_one)
{

	printf("\n\nEnter the operation to perform on the strings\n");
	printf("\nEnter 1 for searching, 2 for sorting, 3 for inserting a new string and 4 for deleting an already existing string\n");
	scanf("%d", &input);

	if (input == 1)
	{
		searchString(text, search, length);
	}
	else if (input == 2)
	{
		sortStrings(text, length);
	}
	else
	{
		printf("INVALID INPUT! TRY AGAIN!!\n\n");
		return 1;
	}

	printf("\n\nDo you want to perform another operation on the strings. Enter 'Y' to continue any other key to exit\n");
	scanf(" %c", &repeat);

	if (repeat != 'y' && repeat != 'Y')
	{
		another_one = false;
	}

}

printf("Thanks for stopping by, see you next time.\n");
printf("Program has exited\n\n");


return 0;
}
