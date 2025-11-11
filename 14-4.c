#include <stdio.h>
#include <string.h>
#define SIZE 40

struct user{
    char arr[SIZE];//社会保险号
    struct{
        char fname[15];//名
        char mname[15];//中间名
        char lname[15];//姓
    };
};
void print_user(struct user*p,int num);
int main(){
    struct user user_list[5]={
    {"30209788","Flossie","Mike","Dribble"}
};
    print_user(user_list,5);

    return 0;
}
void print_user(struct user*p,int num){
    for(int i=0;i<num;i++){
        printf("%s, %s ",p[i].lname,p[i].fname);
      if(strlen(p[i].mname)>0){
        printf("%c.  ",p[i].mname[0]);
      }
      printf("--%s",p[i].arr);

    }

}