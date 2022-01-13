/*
An integer N is given. You have to print all the divisors of N. Example : N = 10. the divisors of 10 is 1,2,5,10

NOTE : print all the number in ascending order
*/
#include<stdio.h>
int main()
{
    int dividend, divisor=1, count=0;
    scanf("%d", &dividend);
        for(int n=divisor; n<=dividend; n++ )
        {
            if(dividend%n==0)
            {
            count++;
            }
        }
        printf("%d \n", count);
        for(int n=divisor; n<=dividend; n++ )
        {
            if(dividend%n==0)
            {
            printf("%d ", n);
            }
        }
    return 0;
}
