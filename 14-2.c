//本题演示1-5月
//在1基础上，本题用户输入不局限于月份全称
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int cala_days(char* month,int day);
struct month{
    char month_name[10];
    char month_abbrev[4];
    int days;
    int number;
}months[5]={
    {"January","Jan",31,1},
    {"Februuary","Feb",28,2},
    {"March","Mar",31,3},
    {"April","Apr",30,4},
    {"May","May",31,5}
};
int main(){
    char name[10];
    int day;
    scanf("%s %d",name,&day);
    //输入月份
    while(strlen(name)>3){
        printf("%s %d",name,cala_days(name,day));
        scanf("%s",name);
    }
    //检查确保输入符合要求，调用函数
    return 0;

}
int cala_days(char* month,int day){
int total=0;
int temp=atoi(month);
//字符串转化为整数
for(int i=0;i<5;i++){
    if((strcmp(month,months[i].month_name))==0||(strcmp(month,months[i].month_abbrev))==0||temp==months[i].number){
        return (total+day);
    }else{
        total+=months[i].days;
    }
}
return -1;
//异常
}
