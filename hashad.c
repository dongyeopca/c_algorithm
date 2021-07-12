#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

bool solution(int x) {
    bool answer;
    int number = x;
    int sum=0;
    while(x){
        sum+=x%10;
        x = x/10;
    }
    if(number%sum == 0){
        answer = true;
    }else{
        answer = false;
    }
    return answer;
}