#include <stdio.h>
int main(){
    double Da=100;
    double De=100;
    int i;
    for( i=0;Da>=De;i++){
        Da+=100*0.1;
        De+=De*0.05;
    }
    printf("%d %lf %lf",i,Da,De);
    return 0;
}