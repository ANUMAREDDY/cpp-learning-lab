#include "basics_main.h"
#include "while_loop.h"
#include "io_helper.h"

void BasicsMain::basicsEntryPoint(){

    IOHelper io;

    WhileLoop wl;
    io.writeLongLong(wl.sumOfFirstNNaturalOptmised(788888888));
    /* KGI: int Range: −2pow(31) to 2pow(31)−1
    2pow(31) = 2,147,483,648
    7,888,888,888 it is not in range*/
    //io.printInteger(wl.lcmOfTwoNumbers(4,6));
    //wl.sumOfFactorsForAGivenNumber(36);
    //wl.printAllTheNumbersDivisibleByNInSpecifiedRange(1,20,7);
    //wl.printSquareOfGivenOneToNumber(30);
    //wl.printCubeOfGivenOneToNumber(30);
    //wl.printFibonacciSeriesForNTerms(5);
    //wl.printSumOfFibonacciSeriesForNTerms(5);
    //io.printBoolean(wl.checkTheGivenNumberIsAPrimeNumber(97));
    //wl.printPrimeNumberInRangeUsingSqrtApproach(1, 100);
    //wl.printPrimeNumberInRange(1, 100);
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

}