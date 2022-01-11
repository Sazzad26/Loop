/* Solve the following factorial problem.
Take input from user.
calculate, n!=n*(n-1)*(n-2)*(n-3)*.....1
print n!=result.
Example, 4!=24.
*/
#include<stdio.h>
int main()
{
    int i, Number, Fact=1;
    printf("Enter a number: ");
    scanf("%d", &Number);
    if(Number <0 )
        printf("Invalid input");
    else{
        for(i= Number; i >1; i--){
            Fact = Fact*i;
        }
        printf(" %d! = %d", Number, Fact);
    }

    return 0;
}
