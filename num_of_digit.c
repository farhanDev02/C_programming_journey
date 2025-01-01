#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n;
    printf("enter the no. \n");
    scanf("%d",&n);
    int cnt=0;
    while (n!=0)
    {
        n=n/10;
        cnt++;

    }
        printf("no. of digit in a no. = %d ",cnt);
    return 0;
}
