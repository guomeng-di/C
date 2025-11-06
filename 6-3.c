//使用嵌套循环打印字母
#include <stdio.h>
int main(){
    char ch;
    scanf("%c",&ch);
    for(int i=1;i<=ch-'A'+1;i++){
        char ch1=ch;
        for(int j=1;j<=i;j++){
            printf("%c",ch1--);
        }
        printf("\n");
    }

    return 0;
}