#include <stdio.h>

#define NUMBER_OF_SECONDS_A_YEAR 365UL*24UL*60UL*60UL	// 365.256366 days per year to be exact
#define RETURN_MIN(x, y) ((x)<(y)?(x):(y))
#define RETURN_PRODUCT(x, y) (x*y)
// This kind of declaration will cause problem
// The correct way is RETURN_PRODUCT((x), (y)) ((x)*(y))

// For question 6
#define BIT3 0x1 << 3
void set_bit3(void);
void set_clear3(void);
int a;

int main(){
	printf("\nThe product is %d\n", RETURN_PRODUCT(5+3,4+1));
	printf("\nThe smaller number is %d\n", RETURN_MIN(5*3,4*1));
	printf("\nThe number of seconds in a year is: %lu\n", NUMBER_OF_SECONDS_A_YEAR);

	// For question 6
	// NOTE: Nested functions are not allowed in ISO C (C99, etc.)
	// Definition by GNU: A nested function is a function defined inside another function.
	//void set_bit3(void){ a |= BIT3; }
	//void clear_bit3(void){ a &= ~BIT3; }

	// Set bit 3 of a
	//a = a|0b100;
	set_bit3();
	printf("\nSet bit a: \"%d\"\n", a);
	// Clear bit 3 of a
	//a = a&0b011;
	clear_bit3();
	printf("\nSet bit a: \"%d\"\n", a);
	return 0;
}
