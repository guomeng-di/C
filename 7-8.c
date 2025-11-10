#include <stdio.h>
#define a "*****"
#define s1 "1) $8.75/hr"
#define s2 "2) $9.33/hr"
#define s3 "3) $10.00/hr"
#define s4 "4) $11.20/hr"
#define tax1 0.15
#define tax2 0.20
#define tax3 0.25
void menu();
void jisuan(float base,float hours);
int main(){
    int selected;
    float hours=0;
    do{
        menu();
        scanf("%d",&selected);
        if(selected<1||selected>5){
            printf("重新输入1-5的整数:\n");
            continue;
        }
        else{
       switch(selected){
                case 1:scanf("%f",&hours);jisuan(8.75,hours);break;
                case 2:scanf("%f",&hours);jisuan(9.33,hours);break;
                case 3:scanf("%f",&hours);jisuan(10.00,hours);break;
                case 4:scanf("%f",&hours);jisuan(11.20,hours);break;
                case 5:break;
            }
        }



    }while(selected !=5);
    return 0;
}
void menu(){
    printf("%s%s%s%s\n",a,a,a,a);
    printf("选择数字：\n");
    printf("%40s",s1);
    printf("%40s\n",s2);
    printf("%40s",s3);
    printf("%40s\n",s4);
    printf("5) quit\n");
    printf("%s%s%s%s\n",a,a,a,a);
}
void jisuan(float base,float hours){
    double sum;
    if(hours<=40){
        sum=hours*base;
    }else {
        sum=hours*base*1.5;
    }
    if(sum<=300){
        sum*=(1-tax1);
    }else if(sum>300&&sum<=450){
     sum=300*(1-tax1)+(sum-300)*(1-tax2);
    }else{
        sum=300*(1-tax1)+150*(1-tax2)+(sum-450)*(1-tax3);
    }
    printf("工资：%lf",sum);
}