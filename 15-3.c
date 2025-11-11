#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>
int switch_count(int n);
int main(int argc,char* argv[]){
    if(argc!=2){
        printf("错误");
        exit(EXIT_FAILURE);
    }//判断是否成功输入
    int i=atoi(argv[1]);
    //将命令行参数转化为整型数据
    printf("%d %d",i,switch_count(i));

    return 0;
}
int switch_count(int n){
     const static int size=CHAR_BIT*sizeof(int);
     int sum=0;
     for(int i=0;i<size;i++){
        if(n&1)sum++;
        n>>=1;
     }
}