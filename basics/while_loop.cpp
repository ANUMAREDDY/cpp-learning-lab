#include <iostream>
#include "while_loop.h"


    void WhileLoop::whileLoop(){
        int i{1};
        while(i <= 10){
            std::cout<<i<<"\n";
            i++;
        }
    }
