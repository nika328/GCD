#include <stdio.h>
//FRACTIONS SUM PROGRAM

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
  
  int n1, n2, d1, d2;
  printf("Enter 2 fractions to be added: ");
  scanf("%d/%d %d/%d", &n1, &d1, &n2, &d2);
  int divisor=GCD(d1*d2, d1*n2+n1*d2);
  printf("\nThe sum is %d/%d.\n", (d1*n2+n1*d2)/divisor, d1*d2/divisor);

 
  return 0;
}
