#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number1,number2,number3;

     printf("Enter the first number\n");
     scanf("%d",&number1);

     printf("Enter the second number\n");
     scanf("%d",&number2);

     printf("Enter the third number\n");
     scanf("%d",&number3);

    {
    if(number1==number2 && number2==number3)
       printf("The all numbers are equal");
    else if (number1>number2 && number1>number3)
      printf("The biggest number is number1: %d",number1);
    else if(number2>number3 && number2>number1)
       printf("The biggest number is number2: %d",number2);
    else if (number3>number1 && number3>number2)
       printf("The biggest number is number3: %d",number3);
    }

}
