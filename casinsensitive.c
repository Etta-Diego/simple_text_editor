#include "main.h"


int caseInsensitiveStrcmp(const char *str1, const char *str2) 
{
	while (*str1 && *str2) 
	{
		/* Convert characters to lowercase */
		char ch1 = tolower(*str1); 
		char ch2 = tolower(*str2);

		if (ch1 != ch2)
		{

			return ch1 - ch2;
		}
	}

	str1++;
	str2++;


return 0; /* Strings are equal */
}
