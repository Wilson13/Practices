#include <stdio.h>

#define NUMBER_OF_SECONDS_A_YEAR 365UL*24UL*60UL*60UL	//365.256366 days per year to be exact
#define RETURN_MIN(x, y) (x<y?x:y)
//
int main(){
	//printf("\nThe smaller number is %d\n", RETURN_MIN(5,4));
	printf("\nThe number of seconds in a year is: %d\n", NUMBER_OF_SECONDS_A_YEAR);
	return 0;
}
