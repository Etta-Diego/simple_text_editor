#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>
#define MAX 100
#define max 20

void searchString(char array[MAX][max], char stringToSearch[max], int size);
void sortStrings(char str[MAX][max], int size);
int caseInsensitiveStrcmp(const char *str1, const char *str2);

#endif
