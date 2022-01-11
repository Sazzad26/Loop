/* Solve the problem to find the series and calculate total sum of the series.
Then calculate the sum of even series and odd series.
*/

#include<stdio.h>
int main()
{
    int start, end, n, sum=0;
    printf("Enter starting number: ");
    scanf("%d", &start);
    printf("Enter ending number: ");
    scanf("%d", &end);
    printf("The series from %d to %d are:", start, end);
    for(n = start; n <= end; n++){
            printf(" %d ", n);
            sum = sum + n;
    }
    printf(" \nTotal sum = %d \n", sum);

    sum=0;
    printf("The even series from %d to %d are:", start, end);
    for(n = start; n <= end; n++){
        if(n%2==0){
           printf(" %d ", n);
            sum = sum + n;
        }
    }
    printf(" \nTotal sum = %d \n", sum);

    sum=0;
    printf("The odd series from %d to %d are:", start, end);
    for(n = start; n <= end; n++){
        if(n%2==1){
           printf(" %d ", n);
            sum = sum + n;
        }
    }
    printf(" \nTotal sum = %d", sum);

    return 0;
}
