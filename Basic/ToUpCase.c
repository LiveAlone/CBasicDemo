#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char* toUpCase(char *inputString);  // false

void toUpCase2(char* fromString, char*toString);

char* toUpCase3(char *inputString);

int main2()
{
    char *str1 = toUpCase3("hello world");
    printf("str1=%s\n", str1);
    free(str1);
    return 0;
}

char* toUpCase3(char *inputString){
    char *newString;
    newString = malloc(strlen(inputString)+1);
    int count;
    for(count = 0; count<strlen(inputString); count ++){
        newString[count] = inputString[count];
    }
    printf("new string %s \n", newString);
    return newString;
}

void toUpCase2(char* fromString, char*toString){
    int count;
    for(count = 0; count<strlen(fromString); count ++){
        toString[count] = fromString[count];
    }
}

char* toUpCase(char *inputString)
{
    char newString[100];
    int count;
    for(count = 0; count<strlen(inputString); count ++){
        newString[count] = inputString[count];
    }
    printf("new string %s \n", newString);
    return newString;
}

