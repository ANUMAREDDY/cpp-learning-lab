#include <iostream>
#include "while_loop.h"


    void WhileLoop::whileLoop(){
        int i{1};
        while(i <= 10){
            std::cout<<i<<"\n";
            i++;
        }
    }

    void WhileLoop::whileLoopReverse(int n){
        
        while(n>=1){
            std::cout<<n<<"\n";
            n--;
        }
    }
