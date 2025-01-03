#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n,m;
    printf("Enter the length : ");
    scanf("%d",&n);

    printf("Enter the breadth : ");
    scanf("%d",&m);

    for (int i = 0; i < m; i++)
    {

        for (int i = 0; i < n; i++)
    
    {

        printf(" * ");
    
    }

        printf("\n");
    
    }
    
    
    
    return 0;
}
