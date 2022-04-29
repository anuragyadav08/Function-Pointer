// Function Pointer C program 
#include <stdio.h>
int sum(int A,int B)
{
    return A+B;
}
int main()
{
    int (*ptr)(int,int)=&sum;
    int res,num1,num2;
    printf("Enter 1st Number :");
    scanf("%d",&num1);
    printf("Enter 2nd Number :");
    scanf("%d",&num2);
    res=ptr(num1,num2);
    printf("Sum of %d and %d is %d",num1,num2,res);
    return 0;
}