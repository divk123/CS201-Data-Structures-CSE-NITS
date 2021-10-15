#include <stdio.h>

int binaryproduct(int bin1, int bin2)
{
    int i = 0, rem = 0, sum[20];
    int binaryprod = 0;
 
    while (bin1 != 0 || bin2 != 0)
    {
        sum[i++] =(bin1 % 10 + bin2 % 10 + rem) % 2;
        rem =(bin1 % 10 + bin2 % 10 + rem) / 2;
        bin1 = bin1 / 10;
        bin2 = bin2 / 10;
    }
    if (rem != 0)
        sum[i++] = rem;
    --i;
    while (i >= 0)
        binaryprod = binaryprod * 10 + sum[i--];
    return binaryprod;
}
 
int main()
{
 
    int b1, b2,multiply=0;
   
    int i = 0, rem = 0, sum[20], digit, factor = 1;
  
    while(1){
    printf("Enter the Choice :\n");
    printf("1.Addition\n2.Multiplication\n3.Exit\n");
    int select;
      scanf("%d",&select);
      if(select==1){
           printf("Enter the first binary number: ");
    scanf("%d", &b1);
    printf("Enter the second binary number: ");
    scanf("%d", &b2);
    while (b1 != 0 || b2 != 0)
    {
        sum[i++] =(b1 % 10 + b2 % 10 + rem) % 2;
        rem =(b1 % 10 + b2 % 10 + rem) / 2;
        b1 = b1 / 10;
        b2 = b2 / 10;
    }
    if (rem != 0)
        sum[i++] = rem;
       --i;
    printf("Sum of two binary numbers: ");
    while (i >= 0)
        printf("%d", sum[i--]);

      printf("\n");}

      else if(select==2){
              printf("Enter the first binary number: ");
    scanf("%d", &b1);
    printf("Enter the second binary number: ");
    scanf("%d", &b2);
    while (b2 != 0)
    {
        digit =  b2 % 10;
        if (digit == 1)
        {
            b1 = b1 * factor;
            multiply = binaryproduct(b1, multiply);
        }
        else
            b1 = b1 * factor;
        b2 = b2 / 10;
        factor = 10;
    }
    printf("Product of two binary numbers: %d", multiply);
    printf("\n");

      }
      else if(select==3){
          break;
      }
    }



    return 0;
}
