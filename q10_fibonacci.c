#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void fibonacci(int number, int counter, long long *storage);

int main()
{
  char input_str[6];
  unsigned short length;
  char *end_ptr;
  unsigned long long *fibonacciNumber = malloc(sizeof(unsigned long long) * 100);
  long input;
  // Overflow scenario: 9223372036854775807 = 2^63-1 = max value of long integer in C.
  // This value is also the largest positive signed address offset for 64-bit CPUs utilizing sign-extended memory addressing

  printf("Enter the length of Fibonacci numbers (< 65335): ");
  fgets(input_str, 6, stdin);
  //printf("Length entered (str): %s", input_str);
  input_str[strcspn(input_str, "\n")] = 0; // Remove '\n' from input_str
  //printf("Length entered (str): %s\n", input_str);
  //*ret = strtol(input_str, &end_ptr, 10);
  input = strtol(input_str, &end_ptr, 10);
  //printf("Size of long: %ld\n", sizeof(long));

  if( end_ptr != input_str ) { // If input_str is not empty string
    printf("Length entered: %ld \n", input);
    fibonacci(input, 0, fibonacciNumber);
  } else {
    printf("Invalid input_str: %s\n", end_ptr);
  }
  //free(ret);
  return 0;
}

void fibonacci(int number, int counter, long long *storage)
{
  //printf("Counter: %d ", counter);
  if( number <= 1 ) {
    printf("%d \n", 0);
    return;
  }

  if ( counter == 0) {
    storage[counter] = 0;
    printf("%d ", 0);
    fibonacci(number, counter+1, storage);
  } else if ( counter == 1 ) {
    storage[counter] = 1;
    printf("%d ", 1);
    fibonacci(number, counter+1, storage);
  } else if ( counter < number ) {
    if ( storage[counter-2] + storage[counter-1] < sizeof(unsigned long) * 2) {
      storage[counter] = storage[counter-2] + storage[counter-1];
      printf("%lld ", storage[counter]);
      fibonacci(number, counter+1, storage);
    } else {
      printf("\nToo large.\n");
      return;
    }
  } else {
    printf("\n");
  }
}
