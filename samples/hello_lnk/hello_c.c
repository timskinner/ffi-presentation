#define _GNU_SOURCE
#include <stdio.h>
char* gen_message(const char* name)
{
    char* message = NULL;
    asprintf(&message,"Hello, %s",name);
    return message;
}
