#include<stdio.h>
int main() 
{
    int num;
    printf("Enter a number" );
    if(scanf("%d", &num)==1)
    {
        if(num>0)
        {
            printf("The number is positive");
        }
        else if(num<0)
        {
            printf("The number is negative");
        }
        else
        {
            printf("The number is zero");
        }
    }
        else
        {
            printf("invalid input");
        }
    }