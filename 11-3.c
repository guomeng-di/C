#include <stdio.h>
#define SIZE 100
int main(){
    char arr[SIZE];
    char ch;
    int i=0;
    while((ch=getchar())!=' '&&ch!='\n'&&ch!='\t')
    {if((ch>='A'&&ch<='Z')||(ch>='a'&&ch<='z')){
        arr[i++]=ch;
    }
}
    return 0;
}