/* Write a C program to print a table
of number.
*/

#include<stdio.h>
int main()
{
    int s,e;
    scanf("%d %d", &s, &e);
    for(int i=s; i<=e; i++)
    {
        for(int j=s; j<=e; j++)
        {

            printf(" %4d ",i*j);
        }
        printf("\n");
    }


    return 0;
}
