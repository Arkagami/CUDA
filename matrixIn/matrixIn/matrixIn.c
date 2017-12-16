#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <malloc.h>


int main()
{
	int length, width, *matrixInput, *matrixOut, size;
	printf("Input width:");
	scanf("%d", &width);
	printf("Input length:");
	scanf("%d", &length);
	size = length * width * sizeof(int);
	matrixInput = (int *)malloc(size);
	for (int i = 0; i < (length * width); i++)
	{
		matrixInput[i] = i + 1;
	}
	printf ("Input matrix:\n--------------------------------------------------------------------------------------\n");
	for (int i = 0; i < width; i++)
	{
		printf ("|");
		for (int j = 0; j < length; j++)
		{
			printf("%-3d|", matrixInput[i*length+j]);
		}
		printf ("\n--------------------------------------------------------------------------------------\n");
	}
	printf("\n\n\n");

	cudaMalloc

	getch();
    return 0;
}

