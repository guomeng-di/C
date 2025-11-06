//金字塔+字符
#include <stdio.h>
int main(){
    char CH[26]="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char ch;
    printf("请输入一个大写字母：");
    scanf("%c",&ch);
    int row=ch-'A'+1;
     
    for(int i=1;i<=row;i++){
        int cnt=0;
        for(int j=row-i;j>0;j--){
            printf(" ");
        }
        for(int m=1;m<=i;m++){
           
           printf("%c",CH[cnt++]);
        }
         cnt-=2;
        for(int n=0;n<=i-1;n++){
            
            printf("%c",CH[cnt--]);
            
        }
        printf("\n");

}  
  
    return 0;
}