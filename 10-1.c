//仅标注需要改正的地方(要求用指针进行计算)
#include <stdio.h>
int main(){
//定义指针指向二维数组const float rain[YEARS][MONTHS]
//const float (*p)[MONTHS]=rain;
//对于运算：subtot+=rain[year][months],用指针
//因为是months不动，每行year相加，才有months++
//故内层循环用指针运算代替year++
//subtot+=*((*p+i)+months);
//其中(*p+i)操作使得指针在行间变换，(*p+i)+months实现了指针指向不同行间的不同列，再解引用c
    return 0;
}