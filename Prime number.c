/* Input a number from user and check is it prime or not?
If the given input is 0 or 1 then print "Neither prime nor composite.
*/

#include<stdio.h>
int main()
{
    int n, i, condition=0;
    scanf("%d",&n);

    if(n==0 || n==1){
        printf("Neither prime nor composite \n");
    }
    else{
        for(int i=2; i<n; i++){
            if(n%i==0){
                condition=1;
                break;
            }
    }
    if(condition==0 || n==2){
        printf("Prime \n");
    }
    else if(condition==1)
            printf("Not Prime \n");
    }
    return 0;
}
