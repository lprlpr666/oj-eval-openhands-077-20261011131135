#include "src.hpp"
#include <iostream>

// Test function 1
void test1() {
    int Blocks[10] = {1,2,3,4,5,6,7,8,9,10};
    int Blocks2[20] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
    int Blocks3[40] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40};
    
    for(int i = 1 ; i <= 40; ++i){
        sjtu::CrossArray Src2(i);
    }
    
    sjtu::CrossArray Src(100);
    
    for(int i = 0;i < 10 ; ++i) std::cout <<Src.InsertArrays(Blocks,10) <<' ';
    for(int i = 0;i < 10 ; ++i) std::cout << Src.InsertArrays(Blocks2,20) << ' ';
    for(int i = 0;i < 10 ; ++i) std::cout << Src.InsertArrays(Blocks3,40) << ' ';
    for(int i = 0;i < 80 ; ++i) std::cout << Src.InsertArrays(Blocks2,20) << ' ';
    
    std::cout << std::endl;
}

// Test function 2
void test2() {
    const int Slice = 10;
    int Blocks[10] = {1,2,3,4,5,6,7,8,9,10};
    
    sjtu::CrossArray Src(100);
    
    for(int i = 0 ;i < 2*Slice ; ++i) Src.InsertArrays(Blocks,10);
    
    for(int i = 0 ;i < Slice; ++i) std::cout << Src.At(i,5)<< ' ';
    
    std::cout << std::endl;
}

int main() {
    test1();
    test2();
    return 0;
}