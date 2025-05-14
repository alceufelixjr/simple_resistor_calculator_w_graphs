#include "readString.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


char* readString1()
{
    char temp[MAX_NAME];
    scanf(" %7[^,],",temp);

    char* str = strdup(temp);
    return str;
}

char* readString2()
{
    char temp[MAX_NAME];
    scanf(" %7[^\n]\n",temp);

    char* str = strdup(temp);
    return str;
}
