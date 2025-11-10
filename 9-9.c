#include <stdio.h>
double power(double a, int b);
int main(){
    double a;
    int b;
    scanf("%lf %d",&a,&b);
    double c=power(a,b);
    printf("%lf",c);
    return 0;
}
double power(double a,int b){
    if(a==0){
        printf("0的0次幂未定义");
     return 0;
    }
    else if(b==0){
        return 1;
    }
    else if(a>0){
        return a*power(a,b-1);
    }
    else{
        return power(a,b+1)/a;
    }
        
    }
