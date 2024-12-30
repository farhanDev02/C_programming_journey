#include<stdio.h>

int main(){
// write a prog to find the product of the digit in a number;
int num=100;
int lastDigit=1;
    while (num!=0)
    {
        int remainder=num%10 ;//to find the last digit of the number
        lastDigit=lastDigit*remainder;
        num=num/10; // reducing num size by one
    }
    printf("%d",lastDigit);



    return 0;
}