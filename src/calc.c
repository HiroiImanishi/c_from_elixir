#include "../include/calc.h"
//.soにしてnif_hello.cからhello.soを作るときにリンクさせる。
int calc(int a,int b){
    int c;
    c = a + b;
    return c;
}