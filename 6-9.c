//在用户输入非数字之前，程序循环处理用户输入的每对值
#include <stdio.h>
void JISUAN(double a,double b);
int main(){
    double a,b;
    printf("请输入两个浮点数：");
    while(scanf("%lf %lf",&a,&b)==2){
        JISUAN(a,b);
    }

    return 0;
}
void JISUAN(double a,double b){
    printf("%lf",(a-b)/(a*b));
}