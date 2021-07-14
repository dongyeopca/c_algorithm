#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int compare(const void *a,const void *b){
    double num1 = *(double*)a;
    double num2 = *(double*)b;
    if(num1<num2){
        return -1;
    }
    if(num1>num2){
        return 1;
    }
    return 0;
}

double median(double *arr,int n){
    if(n%2 ==0){
        return (arr[n/2-1]+arr[n/2])/2;
    }else{
        return arr[(n-1)/2];
    }
}
int main(){
    int n;
    scanf("%d",&n);
    double *arr = malloc(sizeof(double)*n);
    for(int i=0; i<n; ++i){
        scanf("%lf",&arr[i]);
    }
    qsort(arr,n,sizeof(double),compare);
    double result = median(arr,n);
    printf("%.2f",result);
}