#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main()
{
  char input_str[6];
  unsigned short length;
  char *end_ptr;
  //long *ret = malloc(sizeof(long)); //
  long input;
  // Overflow scenario: 9223372036854775807 = 2^63-1 = max value of long integer in C.
  // This value is also the largest positive signed address offset for 64-bit CPUs utilizing sign-extended memory addressing
  int fibonacci(int number, int total);

  printf("Enter the length of Fibonacci numbers (< 65335): ");
  fgets(input_str, 6, stdin);
  printf("Length entered (str): %s\n", input_str);
  input_str[strcspn(input_str, "\n")] = 0; // Remove '\n' from input_str
  //*ret = strtol(input_str, &end_ptr, 10);
  input = strtol(input_str, &end_ptr, 10);
  //printf("Size of long: %ld\n", sizeof(long));

  if( end_ptr != input_str ) { // If input_str is not empty string
    printf("Length entered: %ld, end_ptr: %s\n", input, end_ptr);
    fibonacci(input);
  } else {
    printf("Invalid input_str: %s\n", end_ptr);
  }

  int fibonacci(int number, int total)
  {
    if ( number <= 1) {
      return number;
    } else {
      return number + fibonacci(number-1);
    }
    return total;
  }
  //free(ret);
  return 0;
}
