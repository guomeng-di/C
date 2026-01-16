// 注意：1先将输入的一系列整数中的最小值与第一个数交换
// 2然后将最大值与最后一个数交换，最后输出交换后的序列
// 在1进行后最大值和最小值下标可能发生变化
// 明显，题目中指的是新的下标
// 需要我们再次更新
#include <stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    int arr[N];
    for(int i=0;i<N;i++){
        scanf("%d",&arr[i]);
    }
    int min=0;
    int max=0;
    for(int i=1;i<N;i++){
        if(arr[i]>arr[max])max=i;
        if(arr[i]<arr[min])min=i;
    }
    int temp=arr[min];
    arr[min]=arr[0];
    arr[0]=temp;
        for(int i=1;i<N;i++){
        if(arr[i]>arr[max])max=i;
        if(arr[i]<arr[min])min=i;
    }
    int temp1=arr[max];
    arr[max]=arr[N-1];
    arr[N-1]=temp1;
    for(int j=0;j<N;j++){
        printf("%d ",arr[j]);
    }
    return 0;
}