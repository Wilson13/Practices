/*
 * Reverse a given string.
 * A solution with O(n) time but O(1) space.
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
  char input_str[10];
  char temp_char;
  int i = 0;
  int j = 0;
  int num_element = 0;

  printf("Enter a string: ");
  fgets(input_str, 10, stdin);
  input_str[strcspn(input_str, "\n")] = 0; // Remove '\n' from input

  num_element = strlen(input_str);
  i = num_element;

  printf("Input: %s\n", input_str);
  printf("Input length: %d\n", num_element);

  // i = num_element-1; because array[0~(n-1)]
  for( i = num_element-1; i > num_element/2; i-- ) {
    printf("input_str[i]: %c", input_str[i]);
    if ( input_str[i] != '\0' ) {
      temp_char = input_str[j];
      input_str[j] = input_str[i];
      input_str[i] = temp_char;
      j++;
    }
  }
  printf("Output:%s\n", input_str);
}
