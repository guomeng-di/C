#include <stdio.h>
int main(){
    
     duqu();
    return 0;
}
void duqu(){
    char ch;
   while( ch=getchar()!=EOF){
    if(ch=='\n'){
        continue;
    }
    else{
        if(ch>='A'&&ch<='Z'){
            int a=ch-'A'+1;
            printf("%c %d",ch,a);
        }
        else if(ch>='a'&&ch<='z'){
            int a=ch-'A'+1;
            printf("%c %d",ch,a);
        }
       
    }
   }
}