#include <iostream>
#include "while_loop.h"
#include "io_helper.h"

    IOHelper io;  

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

    void WhileLoop::printEvenNumbersInRange(int start, int end){

        while(end>=start){
            if(start%2==0){
                io.printInteger(start);
            }
            start++;
        }
    }

    void WhileLoop::printOddNumbersInRange(int start, int end){
        while(start<=end){
            if(start%2!=0){
                io.printInteger(start);
            }
            start++;
        }
    }

    void WhileLoop::printStructuredMultiplicationTable(int start, int end, int whichTable){

        while(start<=end){
            auto structureFormatter = std::to_string(whichTable) + " * " + std::to_string(start) 
            + " = "+ std::to_string(whichTable*start);
            io.printString(structureFormatter);
            start++;
        }
    }


