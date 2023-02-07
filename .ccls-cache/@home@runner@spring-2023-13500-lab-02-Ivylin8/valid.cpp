/*
Author: Ivy Lin
Course: CSCI-135
Instructor: Professor Zamansky
Assignment: Task A. Input validation

Ask users to input an intger thats between 0-100. Will ask user to re-enter if out if range. Square the input after. 
*/

#include <iostream>

int main() 
{
  int num;
  std::cout << "please enter an integer from 0 to 100: ";
  std::cin >> num;
  
  while(num <= 0 || num >=100){
    std::cout << "Please re-enter: ";
    std::cin >> num;
    }

  int result = num * num;
  std::cout << "Square of " << num << " is " << result;
    
  return 0;
  }
