#include <stdio.h>
#include "../include/hello.h"
#include "../include/inner_func.h"
//#include "calc.h"
//#define ADD_NUM 10
int hello(int times){
    int square;
    square = inner_func(times);
    for(int i=0;i<square;i++){
        printf("hello,world[%d]\n",i);
    }
    return square;
}