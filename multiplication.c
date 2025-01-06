#include<stdio.h>
int main(int argc, char const *argv[])
{
    int start = 11 , end = 20;
    for (int num = start; num <= end; num++)             
    {
        printf("multiplication of table %d is\n",num);
    for (int i = 1; i <= 10; i++)
    {
        printf("%d x %d   =  %d\n", num,i,num*i);
    }
            printf("\n");
    }
    return 0;
}
