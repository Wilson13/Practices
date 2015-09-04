#include <time.h>
#include <stdio.h>

void Merge(int sortArr[], int start, int middle, int end)
{
  int leftIdx = start, rightIdx = middle, tmpArrPivot=start, tempArr[end+1], i;

  // While elements exist
  while(leftIdx<middle && rightIdx<=end)
  {
    // Compare leftmost elements of two arrays
    if(sortArr[leftIdx]<=sortArr[rightIdx])
    {
      tempArr[tmpArrPivot++] = sortArr[leftIdx];
      leftIdx++;
    }
    else if(sortArr[leftIdx]>sortArr[rightIdx])
    {
      tempArr[tmpArrPivot++] = sortArr[rightIdx];
      rightIdx++;
    }
  }
  // Copy remaining elements to tempArr if exist
  while(leftIdx<middle && tmpArrPivot<=end)
    tempArr[tmpArrPivot++] = sortArr[leftIdx++];
  while(rightIdx<=end && i<=end)
    tempArr[tmpArrPivot++] = sortArr[rightIdx++];

  // Copy tempArr to sortArr
  for(i=start;i<=end;i++)
    sortArr[i] = tempArr[i];

}
void MergeSort(int sortArr[], int start, int end)
{
  if(end-start<1) // if there is only one element, it is sorted
    return;

  int middle = (end+start+2)/2; // Divide (round up)

  MergeSort(sortArr, start, middle-1);
  MergeSort(sortArr, middle, end);
  Merge(sortArr, start, middle, end);
}

int main(){

  int i, n=10, sortArr[n];

  printf("\n#######################\n");
  printf("### MERGE SORT DEMO ###\n");
  printf("#######################\n\n");

  for(i=0;i<n;i++)
  {
    srand(time(NULL));
    sortArr[i] = rand()%2000;
    printf("Random number %d is %d\n", i, sortArr[i]);
    sleep(1); // to make random seed different
  }

  MergeSort(sortArr, 0, n-1);
  printf("\nSorted array:\n|");
  
  for(i=0;i<n;i++)
    printf(" %d |", sortArr[i]);

  printf("\n\n");
  return 0;
}
