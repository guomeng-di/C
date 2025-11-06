//do-while循环练习
#include <stdio.h>
int main(){
    int arr[8];
    arr[0]=2;
    for(int i=1;i<8;i++){
        arr[i++]=arr[i-1]*2;
    }
    int cnt=0;
    do{
        printf("%d ",arr[cnt++]);
    }while(cnt<8);
    return 0;
}