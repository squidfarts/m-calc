/***********************************************************************************
 *                                                                                 *
 * NAME: project.c                                                                 *
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

void getInput(const char * label, float *initValue)
{
    printf("%s", label);
    scanf("%f", initValue);
    
}// end of function getInput

void getOperator(const char * label, char *initValue)
{
    printf("%s", label);
    scanf("%c", initValue);
    
}// end of function getOperator

void printHeader(void)
{
    puts("*********************************");
    puts(": { Simple Math Calculator.   } :");
    puts("*********************************");
}// end of function printHeader

void printError(void)
{
    fprintf(stderr, "%s\n", "Error! Invalid operator.");
}// end of function printHeader
