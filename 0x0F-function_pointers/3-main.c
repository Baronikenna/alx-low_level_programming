#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 * main - augyrugvrhvfjhq
 * 
 * Return: kjlnclnklce100
 */
int main(int argc, char *argv[])
{
	int num1;

	int num2;

	char *operator = argv[2];

	int result;

        int (*func_ptr)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}
	
	num1 = atoi(argv[1]);
       	num2 = atoi(argv[3]);


	func_ptr = get_op_func(operator);
	if (!func_ptr)
	{
	printf("Error\n");
	return (99);
	}
	if ((*operator == '/' || *operator == '%') && num2 == 0)
	{
        printf("Error\n");
        return 100;
    }
	result = func_ptr(num1, num2);
	printf("%d\n", result);
	return (0);
}
