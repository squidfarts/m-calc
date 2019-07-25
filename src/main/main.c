/***********************************************************************************
 *                                                                                 *
 * NAME: main.c                                                                    *
 *                                                                                 *
 * AUTHOR: Michael Brockus.                                                        *
 *                                                                                 *
 * CONTACT: <mailto:michael@squidfarts.com>                                        *
 *                                                                                 *
 * NOTICES:                                                                        *
 *                                                                                 *
 * License: MIT                                                                    *
 *                                                                                 *
 ***********************************************************************************/
#include "project.h"
#include "operations.h"

/*
 * This demonstrates a simple hello world program where the message
 * 'Hello, Meson' is desplayed to the standerd console.
 *
 */
int main(void)
{
    int num1,num2;
    float result = 0;
    char ch;    //to store operator choice
    
    printHeader();
    
    printf("Enter first number: ");
    scanf("%d",&num1);
    
    printf("Enter second number: ");
    scanf("%d",&num2);
    
    puts("Choose operation to perform (+,-,*,/,%): ");
    scanf(" %c",&ch);
    
    switch(ch)
    {
        case '+': result = plus(&num1, &num2); break;
        case '-': result = minus(&num1, &num2); break;
        case '*': result = times(&num1, &num2); break;
        case '/': result = divide(&num1, &num2); break;
        case '%': result = remander(&num1, &num2); break;
        
        default: printError(); break;
    }
    
    printf("Result: %d %c %d = %f\n",num1,ch,num2,result);
    
    return EXIT_SUCCESS;
}// end of function main
