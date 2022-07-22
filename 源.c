#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int Strlen(char* str)
{
	if (*str != '\0')
	{
		return 1+Strlen(str+1);
	}
	else
		return 0;
}

int main()
{
	char arr[] = "bit";
	int len = Strlen(arr);
	printf("×Ö·û´®³¤¶ÈÎª£º%d", len);
	return 0;
}