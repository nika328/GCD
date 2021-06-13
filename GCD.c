/*Name: Nikola Davidová 
  Last revision: 


  Program 01
  
  The Greatest Common Divisor / Factor: 
  - The function to calculate the GCD of any two integers
  - Input from user (numerator, denominator)
  - Using the GCD function, the fraction is simlified into its base from
  - Output is the simplified fraction



*/

#include <stdio.h>

// Function

  int GCD (int num1, int num2)
  {
    while(num2>0 && num1>0)
    {
      if(num1>num2)
      {
        num1=num1%num2;
      }
      else if(num2>num1)
      {
        num2=num2%num1;
      }
      if (num1==num2)
      {
        return num1;
      }
    }
    if (num1==0)
    {
      return num2;
    }
    else if( num2==0)
    {
      return num1;
    }
   return 0;
  }


int main(void) {
  
  // Input from user
   int num1, num2;
   printf("Input the numerator: ");
   scanf("%d",&num1);

   printf("Input the denominator: ");
   scanf("%d",&num2);

   //Output
   printf("The simplified fraction is: %d/%d", num1/GCD(num2, num2), num2/GCD(num2, num1));

  return 0;
}