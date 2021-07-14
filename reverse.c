#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *revstr(char *arr,int len){
    char *str = malloc(sizeof(char)*len+1);
    for(int i=0; i<len; ++i){
        str[i] = arr[len-i-1];
    }
    return str;
}
void swapchar(char *arr,char *arr1,int len){
    for(int i=0; i<len; ++i){
        char step;
        step = arr[i];
        arr[i] = arr1[i];
        arr1[i] = step;
    }
}
int main(){
    char str[257];
    fgets(str,sizeof(str),stdin);
    str[strlen(str)-1] = '\0';
    int len = strlen(str);
    swapchar(revstr(str,len),str,len);
    printf("%s",str);
}