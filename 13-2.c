//文件拷贝
#include <stdio.h>
#include <stdlib.h>
#define SIZE 512
int main(int argc,char* argv[]){
    FILE* f_src,*f_dest;
    char buff[SIZE];
    if(argc!=3){
        printf("错误");
        exit(EXIT_FAILURE);
    }
    //检查命令行
    else{
        if((f_src=fopen(argv[1],"rb"))==NULL){
            printf("错误");
            exit(EXIT_FAILURE);
        }
        if((f_dest=fopen(argv[2],"wb"))==NULL){
            printf("错误");
            exit(EXIT_FAILURE);
        }
        //将文件名赋给指针，并检查成功与否
    }
    size_t bytes;
    while(bytes=fread(buff,sizeof(char),SIZE,f_src)>0){
        //成功读取
        fwrite(buff,sizeof(char),bytes,f_dest);
        //写入在缓冲区存储的数据
    }
    fclose(f_src);
    fclose(f_dest);


    return 0;
}