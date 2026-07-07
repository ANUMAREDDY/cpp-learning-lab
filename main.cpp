#include <iostream>
#include "basics/io_helper.h"
#include "basics/while_loop.h"
#include "basics/basics_main.h"
#include "basics/find_language_standard.h"
using namespace std;

int main() {
    cout << "unstoppable quantitative developer!" << endl;
    
    //Basics
    BasicsMain bm; // Memory is allocated in the stack frame. So, need to delete or use destructor.
    bm.basicsEntryPoint();
    return 0;
}