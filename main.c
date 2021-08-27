/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int can1=0, can2=0,temp=0;
    printf("enter the values:");
    scanf("%d%d",&can1,&can2);
    temp=can1;
    can1=can2;
    can2=temp;
    printf("can1=%d\ncan2=%d",can1,can2);

    return 0;
}
