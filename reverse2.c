#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
void revstr(char *word){
    int len = strlen(word);
    char step;
    for(int i=0; i<len/2; i++){
        step = word[i];
        word[i] = word[len-1-i];
        word[len-1-i] = step;
    }
}

char *filtersym(char *filterword,int len){
    char *word = malloc(sizeof(char)*(len+1));
    int count=0;
    for(int i=0; i<len; i++){
        if(isalnum(filterword[i])){
            word[count] = filterword[i];
            count+=1;
        }
    }
    return word;
}
int main(){
    char str[257];
    char *pointer = str;
    fgets(str,sizeof(str),stdin);
    str[strlen(str)-1]='\0';
    int pos;
    char filterword[257];
    while(sscanf(pointer,"%s%n",filterword,&pos)==1){
        char *po = filtersym(filterword,pos);
        pointer+=pos;
        revstr(po);
        printf("%s ",po);
        free(po);
    }
}