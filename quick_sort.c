#include <stdio.h>
#include <time.h>

void partition(int sortArr[10]){

}

int quick_sort(int sortArr[10], int strtIdx, int endIdx){  // startIndex endIndex

  if(strtIdx>=endIdx)
    return 0;

  int i, j=strtIdx, pivot, tempVal; // i: array marker, j: swap position marker
  pivot = sortArr[strtIdx]; // selects the first element as pivot
  for(i=strtIdx+1;i<=endIdx;i++)
  {
    // if element is greater than pivot, swap them and moves marker upward.
    if(pivot>=sortArr[i])
    {
      tempVal = sortArr[j];
      sortArr[j] = sortArr[i]; // swap value
      sortArr[i] = tempVal;
      j++;
    }
  }
  // if final marker is larger than the last element (pivot), swap their position.
  if(sortArr[j]>sortArr[i-1])
  {
    tempVal = sortArr[j];
    sortArr[j] = sortArr[i-1]; // swap value
    sortArr[i-1] = tempVal;
  }

  /*printf("Sorted array:\n |");
  for(i=0;i<10;i++){
    printf(" %d |", sortArr[i]);
  }
  printf("\n\n");*/

  quick_sort(sortArr, strtIdx, j-1);
  quick_sort(sortArr, j+1, endIdx);

}

int main(){

  int i=0, n=10, sortArr[n];
  srand(time(NULL));
  printf("\nRandom number:\n |");

  for(i=0;i<n;i++){
    sortArr[i] = rand()%1000;
    printf(" %d |", sortArr[i]);
    sleep(1);
  }

  printf("\n\n");
  quick_sort(sortArr, 0, n-1);
  printf("Sorted array:\n |");

  for(i=0;i<n;i++){
    printf(" %d |", sortArr[i]);
  }

  printf("\n\n");
  return 0;;
}
