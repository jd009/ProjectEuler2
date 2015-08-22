//
//  main.cpp
//  ProjectEuler2
//
//  Created by John D on 8/22/15.
//  Copyright (c) 2015 John D. All rights reserved.
//

#include <iostream>

void findSumOfEvenFibonacciNumbers(
   int prevPreviousFib,
   int previousFib,
   int upperLimitFib,
   int& sumOfEvens)
{
   int next = prevPreviousFib + previousFib;
   if(next > upperLimitFib)
   {
      return;
   }

   if(next % 2 == 0)
   {
      sumOfEvens += next;
   }

   findSumOfEvenFibonacciNumbers(
      previousFib,
      next,
      upperLimitFib,
      sumOfEvens);
}

int main(int argc, const char * argv[]) {
   int firstFibonacciNumber = 1;
   int secondFibonacciNumber = 2;
   int upperLimitFibonacciNumber = 4000000;
   int sumOfEvenFibonacciNumbers = secondFibonacciNumber;

   findSumOfEvenFibonacciNumbers(
      firstFibonacciNumber,
      secondFibonacciNumber,
      upperLimitFibonacciNumber,
      sumOfEvenFibonacciNumbers);

   std::cout << "Sum of even Fibonacci numbers up to " << upperLimitFibonacciNumber
             << " is " << sumOfEvenFibonacciNumbers << std::endl;

   return 0;
}
