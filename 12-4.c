#include <stdio.h>
void diaoyong(int *p);
int main(){
    static int n=0;
    printf("输入数字循环继续，输入其他程序结束！");
    int a;
    while( scanf("%d",&a)==1){
        diaoyong(&n);
    }

    printf("%d",n);
    return 0;
}
void diaoyong(int *p){
    (*p)++;
}
/*

#include <stdio.h>
int* diaoyong(int *p);
int main(){
    static int n=0;
    printf("输入数字循环继续，输入其他程序结束！");
    int a;
    while( scanf("%d",&a)==1){
        diaoyong(&n);
    }

    printf("%d",n);
    return 0;
}
int* diaoyong(int *p){
    (*p)++;
    return p;
}*/