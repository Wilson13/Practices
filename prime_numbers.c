#include <stdio.h>
#include <math.h>

int main(){

  double input;
  int nearestSqrt,i=0, result=0, primeArr[] = {2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,53};

  printf("\nPlease enter a positive integer: ");
  scanf("%lf", &input);

  // Obtain the nearest larger square root of the input integer
  nearestSqrt = (int) ceil(sqrt(input)+0.5);
  printf("\nNearest sqrt: %d", nearestSqrt);

  // Determine whether the square root is divisble by any prime number smaller than it
  for(i=0;i<sizeof(primeArr)/sizeof(primeArr[0]);i++)
  {
    //printf("primeArr[i] is %d, result is %d\n", primeArr[i], nearestSqrt%primeArr[i]);
    if(primeArr[i]<nearestSqrt && (int)(input)%primeArr[i]==0)
    {
      result = 1; // The integer is detemined to be not a prime number
      break;
    }
  }

  if(result)
    printf("\n%.0f is not a prime number.\n", input);
  else if(!result)
    printf("\n%.0f is a prime number.\n", input);

  return 0;
}
