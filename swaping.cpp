#include "stdafx.h"
#include <iostream>
#include <stdio.h>

int main(){
    int a,b,temp;
    printf("Welcome to swaping...  :)\n");
    printf("Enter the 1st number you want to swipe\n");
    scanf("%d",a);
    printf("Enter the 2nd number you want to swipe\n");
    scanf("%d",b);
    printf("Now lets see the magic....!!!\n");
    temp=a;
    a=b;
    b=temp;
    printf("Your first number is now : %d\n",a);
    printf("Your second number is now : %d\n",b);
    printf("Thank you....:))\n");

return 0;
}
