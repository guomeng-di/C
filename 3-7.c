#include <stdio.h>
#define INCH 2.54
int main(){
float height;
printf("输入您的身高（/英寸）：");
scanf("%f",&height);
float cm=height*INCH;
printf("您的身高为%f厘米",cm);
    return 0;
}