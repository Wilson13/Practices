#include <stdio.h>

#define RETURN_MIN(x, y) (x<y?x:y)

int main(){
	printf("\nThe smaller number is %d\n", RETURN_MIN(5,4));
	return 0;
}
