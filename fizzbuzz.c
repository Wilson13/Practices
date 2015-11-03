#include <stdio.h>

int main()
{
	int i = 0;
	for (i = 0; i < 100; i++) {
		printf("The current 'i' is %d ", i);
		if (i%3==0)
			printf("Fizz");
		if (i%5==0)
			printf("Buzz");
		printf("\n");
	}

	return 0;
}
