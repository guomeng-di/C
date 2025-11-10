#include <stdio.h>
int to_base(int x,int y);
int main(){
int x,y;
scanf("%d %d",&x,&y);
if(y<2||y>10){
    printf("保证2<=x<=10,重新输入");
    scanf("%d %d",&x,&y);
}
int sum=to_base(x,y);
int sum1=to_base(sum,10);
printf("%d",sum1);
    return 0;
}
int to_base(int x,int y){
     int sum=0;
    while(x>0){
        int digit=0;
        digit=x%y;
       
        sum=sum*10+digit;
        x/=y;
    }
    return sum;
}