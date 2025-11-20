#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,original,rev=0;
    printf("Enter a number: ");
    scanf("%d",&n);
    original=n;
    while(n>0)
    {
        rev=rev*10+n%10;
        n=n/10;
    }
    if(rev==original)
        printf("%d is Pelindrome\n",original);
    else
        printf("%d is Not palindrome\n",original);
    return 0;
}
