#include <stdio.h>
int main(){
    char ch;
    int cnt=0;
    int a=0;
    while((ch=getchar())!='#'){
        switch(ch){
            case 'e':
            a=1;
            break;
            case 'i':
            if(a==1){
                cnt++;
                a=0;
            }else{
                a=0;
                }
            break;
        }
    }
    printf("%d",cnt);
    return 0;
}