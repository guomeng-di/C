//从命令行参数读取两个字符串，转换为二进制，使用~ & | ^运算符，再转换为二进制，以二进制字符串形式打印结果
#include <stdio.h>
#include <stdlib.h>//exit
#include <string.h>
#include <limits.h>
#define SIZE 40
int bstoi(char* s);
char* itobs(int n,char* p);
int main(int argc,char* argv[]){
    if(argc!=3){
        printf("错误");
        exit(EXIT_FAILURE);
    }//判断是否成功输入
    char bs[SIZE]={};
    int result=0;
    result=(~bstoi(argv[1]));
    itobs(result,bs);
    printf("%s",bs);
    //按位取反
    result=(~bstoi(argv[3]));
    itobs(result,bs);
    printf("%s",bs);
    //按位取反
    result=(bstoi(argv[1])&bstoi(argv[2]));
    itobs(result,bs);
    printf("%s",bs);
    //位与
    result=(bstoi(argv[1])|bstoi(argv[2]));
    itobs(result,bs);
    printf("%s",bs);
    //位或
    result=(bstoi(argv[1])^bstoi(argv[2]));
    itobs(result,bs);
    printf("%s",bs);
    //异或

}
int bstoi(char* s){
    int sum=0;
    while(*s!='\0'){
        sum*=2;
        sum+=*s++-'0';
    }
    return sum;
}
//将字符串转换为整数
char* itobs(int n,char* p){
    int i;
    const static int size=CHAR_BIT*sizeof(int);
    for(int i=size-1;i>=0;i--,n>>=1){
        p[i]=(01&n)+'0';
        p[size]='\0';
        }
return p;
}
//将整数转换为字符串
