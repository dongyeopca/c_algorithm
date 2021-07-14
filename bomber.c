#include <stdio.h>

int main(){
    int m,n;
    scanf("%d %d",&m,&n);
    int r,c,p;
    scanf("%d %d %d",&r,&c,&p);
    int arr[100][100];
    int count=0;
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            scanf("%d",&arr[i][j]);
            if(i==r && arr[r][j]<=p && arr[r][j]!=0){
                count+=1;
            }
            if(j==c && arr[i][c]<=p && arr[i][c]!=0){
                count+=1;
            }
        }
    }
    if(arr[r][c] != 0){
        count-=1;
    }
    printf("%d",count);
    return 0;
}