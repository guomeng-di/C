#include <stdio.h>
#include <stdlib.h>
#define SIZE 40
int zhuanhuan(char* s);
int main(){
    char input[SIZE];
    scanf("%s",input);
    int a=zhuanhuan(input);
    printf("%d",a);

    return 0;
}
int zhuanhuan(char* s){
    int sum=0;
    while(*s!='\0'){
        sum*=2;
        sum+=*s++ -'0';
    }
    return sum;
}