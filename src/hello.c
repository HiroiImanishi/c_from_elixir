#include <stdio.h>
#include "../include/hello.h"
//#include "../include/inner_func.h"
#include "../include/calc.h"

//#define ADD_NUM 10
int hello(int times){
    int square = times;
    //square = inner_func(times);
    square = square + calc(1,2);
    for(int i=0;i<square;i++){
        printf("hello,world[%d]\n",i);
    }
    return square;
}