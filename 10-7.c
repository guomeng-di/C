#include <stdio.h>
#define ROWS 3
#define COLS 4
void copy_arr(double t[],double s[],int n);
void copy_ptr(double* t,double* s,int n);
void copy_ptrs(double* t,double* s_start,double* s_end);
//一维数组复制函数的声明
void copy_2_arr(double t[][ROWS],double s[][ROWS],int n);
void copy_2_ptr(double(* t)[ROWS],double(* s)[ROWS],int n);
int main(){ 
    double source[COLS][ROWS]={
        {3.3,3.3,4.4},
        {1.1,2.2,3.3},
        {4.5,5.6,6.7},
        {4.5,5.6,6.7}
    };
    double target[COLS][ROWS];
    copy_2_ptr(target,source,COLS);
    for(int i=0;i<COLS;i++){
        for(int j=0;j<ROWS;j++){
            printf("%.2lf",target[i][j]);
        }
printf("\n");
    }


    return 0;
}
void copy_arr(double t[],double s[],int n){
    for(int i=0;i<n;i++){
        t[i]=s[i];
    }
}
void copy_ptr(double* t,double* s,int n){
   for(int i=0;i<n;i++){
        *(t+i)=*(s+i);
    }
}
void copy_ptrs(double* t,double* s_start,double* s_end){
    for(int i=0;(s_end-s_start)-i>0;i++){
        *(t+i)=*(s_start+i);
    }
}
void copy_2_arr(double t[][ROWS],double s[][ROWS],int n){
    for(int i=0;i<n;i++){
    copy_arr(t[i],s[i],ROWS);
    }
}
void copy_2_ptr(double(* t)[ROWS],double(* s)[ROWS],int n){
    for(int i=0;i<n;i++){
        copy_ptr(* (t+i),* (s+i),ROWS);
    }
}
