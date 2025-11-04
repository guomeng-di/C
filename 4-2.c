/* //法一strlen求长度
#include <stdio.h>
#include <string.h>
 int main(){ 
   printf("输入您的名字：");
   char name[10];
   scanf("%s",name);
   printf("\"%s\"\n",name);//打印名字
   printf("\"%20s\"\n",name);//在宽度为20的字段右端打印名字，包括双引号
   printf("\"%-20s\"\n",name);//在宽度为20的字段左端打印名字，包括双引号
	 int len=strlen(name);
   printf("%*s\n",(len+3),name);//在比姓名字段宽3的字段打印名字
   return 0;
}*/
//法二利用printf返回值求长度
#include <stdio.h>
#include <string.h>
 int main(){ 
   printf("输入您的名字：");
   char name[10];
   scanf("%s",name);
   printf("\"%s\"\n",name);//打印名字
   printf("\"%20s\"\n",name);//在宽度为20的字段右端打印名字，包括双引号
   printf("\"%-20s\"\n",name);//在宽度为20的字段左端打印名字，包括双引号
	 int len=printf("\"%s\"\n",name)-3;//\n,","
   printf("%*s\n",(len+3),name);//在比姓名字段宽3的字段打印名字
   return 0;
}