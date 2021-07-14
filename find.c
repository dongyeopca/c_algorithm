#include <stdio.h>
#include <string.h>

int main(){
    char find[257];
    scanf("%s",find);
    getchar();
    char str[257];
    while(scanf("%[^\n]s",str) != EOF){
        getchar();
        char *len = strstr(str,find);
        if(len != NULL){
            int length = len-str;
            printf("%s (%d)\n",str,length);
        }
    }
}