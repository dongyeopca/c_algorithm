#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* solution(const char* phone_number) {
    int len = strlen(phone_number);
    char* answer = (char*)malloc(sizeof(char)*len);
    strcpy(answer,phone_number);
    for(int i=0; i<len-4; ++i){
        answer[i] = '*';
    }
    return answer;
}