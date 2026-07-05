#include <iostream>
#include "basics/io_helper.h"
#include "basics/while_loop.h"
#include "basics/find_language_standard.h"
using namespace std;

int main() {
    cout << "unstoppable quantitative developer!" << endl;

    //io helper
    IOHelper io;  // Memory is allocated in the stack frame. So, need to delete or use destructor.

    //auto booleanInput = io.readBoolean();
    //io.printBoolean(booleanInput);


    //Basics
    WhileLoop wl;
    wl.printPrimeNumberInRange(1, 100);
    //io.printBoolean(wl.isAPerfectNumber(28));
    //io.printBoolean(wl.isArmstrongNumber(153));
    //io.printInteger(wl.printSumOfDigitsInAGivenNumber(12345));
    //io.printBoolean(wl.isPalindrome(123215));
    //io.printInteger(wl.reverseAGivenNumber(12345));
    //io.printInteger(wl.printTotalNumberOfDigitsInAGivenNumber(12345));
    //io.printInteger(wl.productOfAllDigitInAGivenNumber(123));
    //io.printInteger(wl.factorial(10));
    //io.printInteger(wl.sumOfFirstNOddNumbers(10));
    //io.printInteger(wl.sumOfFirstNNaturalNumbers(100));
    //wl.printStructuredMultiplicationTable(1, 10, 57);
    //wl.printOddNumbersInRange(1, 100);
    //wl.whileLoopReverse(n);
    //wl.whileLoop();

    //FindLanguageStandard fls;
    // int result = fls.findLanguageStandard();


    return 0;
}