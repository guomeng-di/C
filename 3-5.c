#include <stdio.h>
#define TIME 3.156e7
int main(){
int age;
printf("输入您的年龄：");
scanf("%d",&age);
float second=age*TIME;
printf("%f",second);
    return 0;
}