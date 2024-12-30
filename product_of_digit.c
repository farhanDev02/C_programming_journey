#include<stdio.h>

int main(){
// write a prog to find the product of the digit in a number;
int num;
printf("enter the number: ");
scanf("%d",&num);
int lastdigit=1;
while (num!=0)
{
    lastdigit=lastdigit*(num%10);
    num=num/10;
}
    printf("product of digit = %d ",lastdigit);
    return 0;
}