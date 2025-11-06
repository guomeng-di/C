//创建数组，存入26个小写英文字母，并输出
#include <stdio.h>
int main(){
   char arr[26];
   char ch='a';
   for(int i=0;i<26;i++){
    arr[i]=ch++;
   }

   for(int i=0;i<26;i++){
    printf("%c",arr[i]);
   }
   return 0;
}