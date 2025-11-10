#include <stdio.h>
int main(){
    char ch;
    int cnt=0;
    while((ch=getchar())!='#'){
        cnt++;
       if(cnt%8==0){
        printf("\n");
    }
    if(ch=='\n'){
        printf("'\\n'-%d",ch);
    }
    else if(ch=='\t'){
        printf("'\\t-%d",ch);
    }
    else
    {printf("'%c'-%d",ch,ch);}
    }
    return 0;
}