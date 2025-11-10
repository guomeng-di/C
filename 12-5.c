//学习如何生成100个1-10范围内的随机数
#include <stdio.h>
#define SIZE 100
void sort(int* p,int n);
#include <time.h>//1
#include <stdlib.h>//2
int main(){
    int arr[SIZE];
    srand((unsigned int)time(0));//3
    for(int i=0;i<SIZE;i++){
       arr[i]=rand()%10+1;//4
    }
    sort(arr,SIZE);
    for(int i=0;i<SIZE;i++){
        printf("%d",arr[i]);
    }


    return 0;
}
void sort(int* p,int n){
  
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(p[i]>p[i+1]){
                  int temp=p[i];
                  p[i]=p[i+1];
                  p[i+1]=temp;

            }
        }
    }

}