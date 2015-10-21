#include <stdio.h>

int main(){

  int input, dig, output=0, i=0;
  printf("Please enter an integer: ");
  scanf("%d", &input);

  while(input>0){

    dig = input%10;

    if(i==0){
      output = dig;
      i++;
    }
    else if(i!=0)
      output = output*10 + dig;

    input-=dig;
    input/=10;
  }
  printf("Reversed decimal: %d\n", output);
  return 0;
}
