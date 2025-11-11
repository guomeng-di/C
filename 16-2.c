#include <stdio.h>
#define TIAOHE(x,y) (1/((1/(x)+1/(y))/2))
int main(){
    double s1,s2;
    scanf("%lf %lf",&s1,&s2);
    printf("%lf",TIAOHE(s1,s2));

    return 0;
}