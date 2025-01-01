#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n;
    printf("enter the no. \n");
    scanf("%d",&n);
    int lastdigit=0;
    while (n!=0)
    {
        lastdigit=lastdigit+(n%10);
        n=n/10;
    }
        printf("sum of no. is %d",lastdigit);
    return 0;
}
