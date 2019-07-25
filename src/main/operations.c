/***********************************************************************************
 *                                                                                 *
 * NAME: operations.c                                                              *
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
#include "operations.h"


int plus(int *x, int *y)
{
    return (*x + *y);
}// end of function plus

int minus(int *x, int *y)
{
    return (*y - *x);
}// end of function minus

float divide(int *x, int *y)
{
    int xCopy = *x, yCopy = *y;
    return ((float)xCopy / (float)yCopy);
    
}// end of function div

int times(int *x, int *y)
{
    return (*x * *y);
}// end of function times


int remander(int *x, int *y)
{
    return (*y % *x);
}// end of function times
