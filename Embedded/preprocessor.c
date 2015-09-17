#include <stdio.h>

#define NUMBER_OF_SECONDS_A_YEAR 365UL*24UL*60UL*60UL	// 365.256366 days per year to be exact
#define RETURN_MIN(x, y) ((x)<(y)?(x):(y))
#define RETURN_PRODUCT(x, y) (x*y)
// This kind of declaration will cause problem
// The correct way is RETURN_PRODUCT((x), (y)) ((x)*(y))

int main(){
	printf("\nThe product is %d\n", RETURN_PRODUCT(5+3,4+1));
	printf("\nThe smaller number is %d\n", RETURN_MIN(5*3,4*1));
	printf("\nThe number of seconds in a year is: %lu\n", NUMBER_OF_SECONDS_A_YEAR);
	return 0;
}
