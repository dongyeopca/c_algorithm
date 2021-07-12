#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(long long n) {
    int count=0;
    while(n>1){
        if(n%2==0){
            n = n/2;
            count+=1;
        }
        else{
            n= 3*n+1;
            count+=1;
        }
        if(count==500){
            return -1;
        }
    }
    return count;
}