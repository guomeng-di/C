#include <stdio.h>
#include <string.h>
int main(){
    printf("输入您的名：");
    char ming[40];
    scanf("%s",ming);
    int len1=strlen(ming);
    printf("输入您的姓：");
    char xing[40];
    scanf("%s",xing);
    int len2=strlen(xing);
    printf("%s %s\n",ming,xing);
printf("%*d %*d",len1,len1,len2,len2);
    return 0;
}