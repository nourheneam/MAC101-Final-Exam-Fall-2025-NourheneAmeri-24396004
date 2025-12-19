/*
 * CS101 Final Exam - File 2: bmi_calculator.cpp
 * The Tool Test: BMI Calculator
 *
 * Student Name: Nourhene Ameri
 * Date: 12/18/2025
 *
 * OBJECTIVE:
 * Create an interactive program that calculates a user's Body Mass Index (BMI).
 *
 * REQUIREMENTS:
 * 1. Ask the user for their weight in kilograms
 * 2. Ask the user for their height in meters
 * 3. Calculate BMI using the formula: BMI = weight / (height × height)
 * 4. Display the calculated BMI to the user
 * 5. BONUS: Tell the user their BMI category (Underweight, Normal, Overweight, Obese)
 *
 * HINTS:
 * - Use 'double' or 'float' for decimal numbers
 * - Use 'cin' to get input from the user
 * - Use 'cout' to display messages and results
 *
 * BMI CATEGORIES (BONUS):
 * - Underweight: BMI < 18.5
 * - Normal weight: BMI 18.5 - 24.9
 * - Overweight: BMI 25 - 29.9
 * - Obese: BMI >= 30
 *
 * GRADING FOCUS:
 * - Can you get input from the user?
 * - Can you perform the calculation correctly?
 * - Can you display the result in a user-friendly way?
 */

#include <iostream>
using namespace std;

int main()
{
  // I use double because weight and height can have decimal values
  // This help make the BMI calculation more accurate
  double weight;
  double height;
  double bmi;

  // I use cout to explain the purpose of the program
  cout << "Welcome to the BMI Calculator!" << endl;
  cout << "This program will calculate your Body Mass Index." << endl;
  cout << endl;

  // I use cout to ask for the weight in kilograms
  // I use cin to store the user's input
  cout << "Enter your weight in kilograms: ";
  cin >> weight;
  
  // I do the same thing that I did with weight
  // I use cout to ask and cin to store the height
  cout << "Enter you height in meters: ";
  cin >> height;

  // I apply the BMI formula given in the question
  bmi = weight / (height * height);

  // I use cout to display the result
  // this prints the result of the BMI for the user to see
  cout << "\nYour BMI is: " << bmi << endl;
  
  // I check the BMI value starting from the lowest range
  // I check if the BMI is less than 18.5
  // If this condition is true, the user is underweight
  if (bmi < 18.5)
  {
    cout << "Category: Underweight" << endl;
  }
  
  // If the first condition is false, I check the next range
  // This checks if the BMI is the normal weight range
  else if (bmi < 25)
  {
    cout << "Category: Normal weight" << endl;
  }
  
  // If BMI is higher, I check if it falls in the overweight range
  else if (bmi < 30)
  {
    cout << "Category: Overweight" << endl;
  }
  
  // If none of the above conditions are true
  // The BMI is 30 or higher, it means in ther obese range
  else
  {
    cout << "Category: Obese" << endl;
  }
  
  // This is a final message to end the program politely, using cout
  cout << "\nThank you for using the BMI Calculator!" << endl;
  
  return 0;
}
