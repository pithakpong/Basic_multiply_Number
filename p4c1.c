#include <stdio.h> 
int main() 
{ 
    int number1,number2,result; 
    printf("Key number1 : ");
    scanf("%d",&number1);
    printf("Key number2 : ");
    scanf("%d",&number2);
    result = number1*number2;
    printf("Result : %d",result);
    return 0;
};