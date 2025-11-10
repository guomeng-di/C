#include <stdio.h>
int main(){
    char ch;
    int cnt=0;
    while((ch=getchar())!='#'){
        switch(ch){
            case '!':
            printf("!!");
            cnt++;
            break;
            case '.':
            printf("!");
            cnt++;
            break;
            default:printf("%c",ch);
        }
    }
    printf("%d",cnt);
    return 0;
}