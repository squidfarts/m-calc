/***********************************************************************************
 *                                                                                 *
 * NAME: project.h                                                                 *
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
#ifndef SQUID_PROJECT_H
#define SQUID_PROJECT_H

#ifdef _MSC_VER
// disable _s warnings
#define _CRT_SECURE_NO_WARNINGS
// disable pragma warnings
#pragma warning( disable : 4068 )
#endif

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

void getInput(const char * label, float *initValue);
void getOperator(const char * label, char *initValue);
void printHeader(void);
void printError(void);

#endif /* SQUID_HEADER_H */
