/*An integer N is given. You have to reverse it.
for example:
if N= 1234 reverse of N is 4321
if there are leading zeros after reversing,
print them too. for example there are two leading
zeros here after reversing 1200*/



#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    while(n!=0)
    {
        printf("%d", n%10);
        n=n/10;
    }
    return 0;
}
