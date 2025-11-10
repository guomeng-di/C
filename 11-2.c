//读取字符串存入数组中
#include <stdio.h>
#define n 40
char* read_char(char* p,int n1);
int main(){
    char arr[n];
    read_char(arr,n);
    puts(arr);

    return 0;
}
char* read_char(char* p,int n1){
    for(int i=0;i!=EOF&&i<n1;i++){
        p[i]=getchar();
        if(p[i]=='\n'||p[i]=='\t'||p[i]==' ') break;
    }
    /*
    int i=0;
    do{
    *(p+i)=getchar();
    }while(i!=EOF&&++i<n);
    */
    return p;
}