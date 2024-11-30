#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(void)

{
	int* tabPtr, i, sum = 0;
	tabPtr = (int*)malloc(5 * sizeof(int));
	if (tabPtr != NULL)
	{
		for (i = 0; i < 5; i++)
			tabPtr[i] = i;

		sum = 0;

		for (i = 0; i < 5; i++)
			sum += tabPtr[i];

		printf("sum is %d", sum);
		free(tabPtr);
	}
	else
	{
		puts("allocation failed");
	}
	return 0;
}