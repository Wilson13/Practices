#include <time.h>
#include <stdio.h>

int main(){

  int i=0, sortArr[10];

  printf("########################\n");
  printf("### BUBBLE SORT DEMO ###\n");
  printf("########################\n");

  for(i=9;i>=0;i--)
  {
    srand(time(NULL));
    sortArr[i] = rand()%2000;
    printf("\nRandom number %d is %d\n", 9-i, sortArr[i]);
    sleep(1); // to make random seed different
  }

  // Bubble sort starts here
  printf("\n### BUBBLE SORT STARTING... ###\n");
  sleep(2);
  for(i=0;i<10;i++)
  {
    int j;
    for(j=0;j<9-i;j++)  // j = 0,1,2,3,4,5,6,7,8
    {
      int tempElmt;
      if(sortArr[j]>sortArr[j+1])
      {
        tempElmt = sortArr[j];
        sortArr[j] = sortArr[j+1];
        sortArr[j+1] = tempElmt;
      }
    }
  }

  // Print out the result
  printf("\nSorted array:\n |");
  for(i=0;i<10;i++)
  {
    printf(" %d |", sortArr[i]);
  }
  printf("\n");
}
