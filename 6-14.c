#include <stdio.h>
int main(){
    double arr1[8];
    double arr2[8];
    double sum=0;
    for(int i=0;i<8;i++){
        scanf("%lf",&arr1[i]);
        sum+=arr1[i];
        arr2[i]=sum;
    }
    for(int i=0;i<8;i++){
        printf("%lf ",arr1[i]);
    }
    printf("\n");
    for(int i=0;i<8;i++){
        printf("%lf ",arr2[i]);
    }
    return 0;
}