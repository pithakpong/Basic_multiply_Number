#include <stdio.h> 
int main() 
{ 
    int number1,number2,result = 0; 

    printf("Key number1 : ");
    scanf("%d",&number1);
    printf("Key number2 : ");
    scanf("%d",&number2);
    for(int i=0;i<number2;i++)  
    { 
        result += number1;
    }
    printf("Result :%d ",result);
    return 0;
}