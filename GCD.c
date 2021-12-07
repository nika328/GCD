#include <stdio.h>
//GCD PROGRAM

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

  int n1, n2;
  printf("Enter 2 numbers to find their GCD: ");
  scanf("%d %d", &n1, &n2);

  printf("\nThe GCD is %d. ", GCD(n1,n2));


  return 0;
}

