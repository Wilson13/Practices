# Practices

1. Fizzbuzz Question

 Write a program that prints the numbers from 1 to 100.  
 But for multiples of three print “Fizz” instead of the number and for the multiples of five print “Buzz”.  
 For numbers which are multiples of both three and five print “FizzBuzz”."

2. Bubble Sort

 Worst and average case complexity: O(N^2).  
 This is due to the double loop which sorts N items each.  
 "This technique is called bubble sort or sinking sort because the smaller values gradually "bubble" their way upward to the top of the aaray like air bubbles rising in water, while the larger values sink to the bottom of the array. "

3. Merge Sort  

  A divide and conquer algorithm developed by John Von Neumann.  
  Worst and average case complexity: O(nlogn).  

  Algorithm:  

  1. Divide the array into halves.
      - If only one element exists, it is sorted; else, divide the array [A] into halves.

  2. Merge the sorted array (sorting is also done over here).
      - Compare the leftmost element from both arrays 1A & 2A, store the smallest element, gradually moving upward.
      - Store remaining elements if comparison is completed.  

        - E.g. 1A[0] vs 2A[0], if 1A[0] is smaller, store 1A[0] into B[0].
        - Then compare 1A[1] vs 2A[0]. If 1A[1] is smaller, store 1A[1] into B[1].
        - Then store 2A[0] & 2A[1] into B[2-3].
        - Copy B[0-3]  into A[0-3]

4. Quick Sort

  A divide and conquer algorithm developed by Tony Hoare in 1959.
  Worst case complexity: O(n^2),  average case complexity: O(nlogn).

  In the code, the leftmost element is selected as the pivot which results in worst case when applied on sorted elements. Randomly selecting or selecting the median of the first, middle, and last element solves this problem.

*The complexity of an algorithm roughly describes the number of operations (i.e. comparisons in sorting) it requires.
