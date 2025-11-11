//不能使用命令行
#include <stdio.h>
#include <stdlib.h>
int main(int argc,char* argv[]){
    int ch;
    FILE* fp;
    unsigned long count=0;
    char file_name[50];
    scanf("%s",file_name);
    if((fp=fopen(file_name,"r"))==NULL){
        printf("错误");
        exit(EXIT_FAILURE);
    }
    while((ch=getc(fp))!=EOF){
        putc(ch,stdout);
        count++;
    }
    fclose(fp);
    printf("%lu",count);


    return 0;
}