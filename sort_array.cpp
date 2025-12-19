/*
 * CS101 Final Exam - File 1: sort_array.cpp
 * The Logic Test: Sorting an Array
 *
 * Student Name: Nourhene Ameri
 * Date: 12/18/2025
 *
 * OBJECTIVE:
 * Write a program that sorts an array of 100 integers in ascending order.
 *
 * REQUIREMENTS:
 * 1. Use the provided array 'numbers' containing integers 1-100 in random order
 * 2. Implement a sorting algorithm (Bubble Sort is recommended for simplicity)
 * 3. Display the array before and after sorting (at least the first 10-20 elements)
 *
 * HINTS:
 * - You'll need a nested loop (a loop inside another loop)
 * - You'll need to swap two elements when they're in the wrong order
 * - To swap: temp = a; a = b; b = temp;
 *
 * GRADING FOCUS:
 * - Do you understand the sorting logic?
 * - Can you use nested loops correctly?
 * - Does your swap mechanism work?
 */

#include <iostream>
using namespace std;

int main()
{
  // An unsorted array of numbers 1-100 for you to sort
  // My job is to sort it from smallest to largest
  int numbers[100] = {
      63, 12, 89, 45, 23, 78, 34, 91, 56, 7,
      82, 29, 67, 14, 95, 41, 18, 73, 50, 36,
      98, 5, 61, 27, 84, 48, 10, 75, 32, 69,
      21, 58, 93, 15, 80, 44, 3, 70, 37, 96,
      52, 19, 86, 31, 65, 9, 77, 42, 24, 88,
      54, 1, 71, 39, 94, 25, 81, 47, 13, 68,
      35, 99, 59, 22, 85, 46, 11, 74, 30, 97,
      51, 6, 72, 38, 92, 26, 83, 49, 16, 66,
      33, 100, 57, 20, 87, 43, 8, 76, 40, 62,
      28, 90, 55, 17, 79, 4, 64, 2, 53, 60};

  // I use cout to display the array before sorting
  cout << "Array before sorting:" << endl;
  
  // I print the first 20 numbers to see the original order
  for (int i = 0; i < 20; i++)
  {
    cout << numbers[i] << " ";
  }
  cout << endl;
  
  // I will use Bubble Sort:
  // - Bubble Sort compares neighbors (numbers next to each other)
  // - If the left number is bigger than the right number, they are in the wrong order
  // - Then we swap them
  // - We repeat many passes until everything is sorted
  
  // OUTER LOOP (passes) :
  // one pass pushes the largest remaining value toward the end
  // Doing many passes makes the whole array sorted
  for (int pass = 0; pass < 100; pass++)
  {
    // INNER LOOP (comparisons) :
    // This loop walks through the array and compares numbers[j] with numbers[j+1]
    // We stop at 99 because j+1 must stay inside the array (last index is 99)
    for (int j = 0; j < 99; j++)
    {
        // CONDITION:
        // If the current element is bigger than the next element,
        // they are not in ascending order
        if (numbers[j] > numbers[j+1])
        {
            int temp = numbers[j];
            numbers[j] = numbers[j+1];
            numbers[j+1] = temp;
        }
    }
    // After each full pass, the array is a little more sorted
    // The biggest numbers slowly move to the endl
  }

  // I use cout to display the array after sorting
  cout << "\nArray after sorting:" << endl;

  // I print the first 20 numbers again
  // If sorting worked, it should start like: 1 2 3 4 5 ...
  for (int i = 0; i < 20; i++)
  {
    cout << numbers[i] << " ";
  }
  cout << endl;

  return 0;
}
