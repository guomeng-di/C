#include <stdio.h>
#include <stdlib.h>// qsort函数
#include <time.h>
#define SIZE 20
int bfind(const int arr[],int size,int target);
int comp(const void* p1,const void* p2);
int main(){
    int nums[SIZE];
    //存随机数
    int result,input;
    srand(time(0));
    for(int i=0;i<SIZE;i++){
        nums[i]=rand()%100;
    }
    //生成100以内随机数，并存入数组
    qsort(nums,SIZE,sizeof(int),comp);
    //调用函数排序
    scanf("%d",&input);
    //用户输入查找数据
    if(bfind(nums,SIZE,input)==1){
        printf("找到了");
    }else{
        printf("没有");
    }
    //调用函数查找数组中是否有input
}
int comp(const void* p1,const void* p2){
const int*ps1=(const int*)p1;
const int*ps2=(const int*)p2;
if(*ps1==*ps2)return 0;
else if(*ps1>*ps2)return 1;
else return -1;
}
//比较两个指针指向的整数的大小 = 0,> 1,<-1
int bfind(const int arr[],int size,int target){
    int low=0;
    int high=size-1;
    int cur;
    while(low<=high){
        cur=(low+high)/2;
        if(target==arr[cur])return 1;
        if(target>arr[cur]){
            low=cur+1;
            continue;
        }else{
            high=cur-1;
            continue;
        }
        if(cur==low)return 0;

    }
    return 0;
}