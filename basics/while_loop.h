#ifndef WHILE_LOOP_H
#define WHILE_LOOP_H

class WhileLoop{
    public:
        void whileLoop();
        void whileLoopReverse(int n);
        void printEvenNumbersInRange(int start, int end);
        void printOddNumbersInRange(int start, int end);
        void printStructuredMultiplicationTable(int start, int end, int whichTable);
        int sumOfFirstNNaturalNumbers(int n);
        int sumOfFirstNEvenNumbers(int n);
        int sumOfFirstNOddNumbers(int n);
        int factorial(int n);
        int productOfAllDigitInAGivenNumber(int n);
        int printTotalNumberOfDigitsInAGivenNumber(int n);
        int reverseAGivenNumber(int n);
        bool isPalindrome(int n);
        int printSumOfDigitsInAGivenNumber(int n);
        bool isArmstrongNumber(int n);
        bool isAPerfectNumber(int n);
        void printPrimeNumberInRange(int start, int end);
        void printPrimeNumberInRangeUsingSqrtApproach(int start, int end);
        bool checkTheGivenNumberIsAPrimeNumber(int number);
        void printFibonacciSeriesForNTerms(int n);
        void printSumOfFibonacciSeriesForNTerms(int n);
        void printSquareOfGivenOneToNumber(int n);
        void printCubeOfGivenOneToNumber(int n);
        void printAllTheNumbersDivisibleByNInSpecifiedRange(int start, int end, int n);
        void factorsForAGivenNumber(int n);

};

#endif