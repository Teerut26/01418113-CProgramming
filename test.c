#include <stdio.h>

int main(){
    float number, sum;
    
    printf("Initial Value: ");
    scanf("%f" , &number);    
    while (1){
        printf("\n");
        char operator;
        printf("Operator: ");
        scanf(" %c" , &operator);            
        if (operator == '@'){
            printf("\n");
            break;
        }
        float input;
        printf("Input Value: ");
        scanf(" %f" , &input);
        if (operator == '+'){
            number += input;
            printf("Present Value is %.4f" , number);            
        }
        else if (operator == '-'){
            number -= input; 
            printf("Present Value is %.4f" , number);
            
        }
        else if (operator == '*'){
            number *= input;
            printf("Present Value is %.4f" , number);
        }
        else if (operator == '/'){
            number /= input;
            printf("Present Value is %.4f" , number);
        }
     //   printf("\n");
    }
    printf("Finish Calculation. Final Value is %.4f" , number);
}