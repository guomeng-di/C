#include <stdio.h>
void critic(int* p);
int main(){
    int units;
    scanf("%d",&units);
    while(units!=56){
        critic(&units);
    }
    printf("对");
    return 0;
}
void critic(int* p){
    scanf("%d",p);
}