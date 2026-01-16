//小女子轻轻一改
//我们希望输入时是一个一个数字输入，这样好对其修改，所以%1d
#include <stdio.h>
int main(){
    int arr[4];
    for(int i=0;i<4;i++){
        scanf("%1d",&arr[i]);
        arr[i]=(arr[i]+9)%10;
    }
    int temp=arr[0];
    arr[0]=arr[2];
    arr[2]=temp;
    int temp1=arr[1];
    arr[1]=arr[3];
    arr[3]=temp1;
    printf("The encrypted number is ");
    for(int i=0;i<4;i++){
        printf("%d",arr[i]);
    }
}