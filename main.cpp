#include <iostream>
#include "basics/io_helper.h"
#include "basics/while_loop.h"
#include "basics/find_language_standard.h"
using namespace std;

int main() {
    cout << "unstoppable quantitative developer!" << endl;

    //io helper
    IOHelper io;  // Memory is allocated in the stack frame. So, need to delete or use destructor.

    auto booleanInput = io.readBoolean();
    io.printBoolean(booleanInput);


    //Basics
    WhileLoop wl;
    //wl.whileLoopReverse(n);

    //wl.whileLoop();

    //FindLanguageStandard fls;
    // int result = fls.findLanguageStandard();


    return 0;
}