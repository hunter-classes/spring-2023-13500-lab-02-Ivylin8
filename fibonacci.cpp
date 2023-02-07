/*
Author: Ivy Lin
Course: CSCI-135
Instructor: Professor Zamansky
Assignment: Task D

Print out the fibonacii numbers from 0 to 60
*/

#include <iostream>

int main()
{
  //set array
  int fib[60];
  //gives the first two numbers 
  fib[0] =0;
  fib[1] = 1;
//set the beginning and ending
  for (int i = 0;i<= 60;i++)
  {
    fib[i] = fib[i-1] + fib[i-2];
    std::cout << fib[i]<<std::endl;
  }
  return 0;
}
 