#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define DATA_SIZE 10

typedef struct stringData{
    char *stringData;
    struct stringData *next;
}mydata;

mydata* append(mydata *start, char *input);
void freeData(mydata *start);
void displayAllData(mydata *start);

int main(){
    printf("test linked list condition\n");

    char input[DATA_SIZE];
    printf(" to finish control-D finish \n");
    mydata *start = NULL;
    for(int i=0; i<1; i++){
        start = append(start, "yaoqijun");
    }
    displayAllData(start);
    free(start);
    return 0;
}

void displayAllData(mydata *start){

    mydata *cur=start;
    int count = 1;
    while(cur){
        printf("current line is " + count);
        printf("  content is ");
        printf(cur->stringData);
        printf(" \n");
        cur = cur->next;
    }
    printf("finish all data content over\n");
}

void freeData(mydata *start){
    mydata *cur, *next;
    cur = start;
    while(cur){
        next = cur->next;
        free(cur->stringData);
        free(cur);
        cur = next;
    }
}

mydata* append(mydata *start, char *input){
    mydata *cur=start, *prev = NULL, *newObject;
    while(cur){
        prev = cur;
        cur = cur->next;
    }

    cur = prev;

    newObject = malloc(sizeof(mydata));

    if(!newObject){
        printf("malloc new my data object fail\n");
        exit(255);
    }

    if(cur){
        cur->next = newObject;
    }else{
        start = newObject;
    }

    cur = newObject;
    if(NULL == (cur->stringData = malloc(sizeof(input) + 1))){
        printf("string malloc fail\n");
        exit(255);
    }
    strcpy(cur->stringData, input);
    cur->next = NULL;
    return start;
}
