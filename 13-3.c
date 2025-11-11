//原文件名和输出文件名一样，要对原文件的字符逐个修改
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
int main(){
    FILE* fp;
    char file_name[80];
    char ch;
    scanf("%s",file_name);
    if((fp=fopen(file_name,"r+"))==NULL){
        printf("错误");
        exit(EXIT_FAILURE);
    }
    while((ch=getc(fp))!=EOF){
        fseek(fp,-1,SEEK_SET);
            putc(toupper(ch),fp);
        
    }
    fclose(fp);


    return 0;
}