/*
Author: Ivy Lin
Course: CSCI-135
Instructor: Professor Zamansky
Assignment: Task c

Using arrays to store, update, and retrieve numbers
*/

#include <iostream>


int main()
{
int myData[10];
///appending 1 into array
  for(int i =0; i < 10; i++){
    myData[i]=1;
  }

  for(int i = 0; i<10; i++){
    std::cout<<myData[i]<<"";
  }

  std::cout<<std::endl<<std::endl;

//asking user for input
int i,v;
  do{
    
    for(int i = 0; i<10; i++)
    {
    std::cout<<myData[i]<<" " ;
    }
std::cout <<std::endl;
    std::cout << "Enter the index: ";
    std::cin >> i;
    
    std::cout << "Enter the value: ";
    std::cin >> v;
//checks if is in range
    if (i>=0 && i<=10)
    {
      myData[i] =v;
    }
    else{
      std:: cout<<"Index out of range.";
    }

  }while(i >=0 && i <=10);
  
  }
