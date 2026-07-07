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

    int WhileLoop::sumOfFirstNNaturalNumbers(int n){
        int sum{};
        while(n>=1){
            sum+=n;
            n--;
        }
        return sum;
    }

    int WhileLoop::sumOfFirstNEvenNumbers(int n){ // 1 to n even numbers sum=?
        int sum{};
        int start{1};
        while(start<=n){
            if(start%2==0){
                sum+=start;
            }
            start++;
        }
        return sum;
    }


    int WhileLoop::sumOfFirstNOddNumbers(int n){ // 1 to n odd numbers sum=?
        int sum{};
        int start{1};
        while(start<=n){
            if(start%2!=0){
                sum+=start;
            }
            start++;
        }
        return sum;
    }

    int WhileLoop::factorial(int n){
        int product{1};
        while(n>0){
            product*=n;
            n--;
        }
        return product;
    }

    // Shouldn't use recurssion inside while loop because for F(n) while loos runs n times,
    // for f(n-1) other n-1 times which produces in exponenetial results.

    int WhileLoop::productOfAllDigitInAGivenNumber(int n){
        int product{1};
        while(n>0){
            int lastDigit = n%10;
            product*=lastDigit;
            n/=10;
        }
        return product;
    }
    // To obtain reminder %
    //To obtain quotient /

    int WhileLoop::printTotalNumberOfDigitsInAGivenNumber(int n){
        int count{};
      while(n>0){
        count++;
        n/=10;
      }
      return count;
    }

    int WhileLoop::reverseAGivenNumber(int n){
        int reverse{};
        while(n>0){
            reverse = reverse*10 + n%10;
            n/=10;
        }
        return reverse;
    }

    bool WhileLoop::isPalindrome(int n){
        int reverse{};
        int originalNumber{n};

        while(n>0){
            reverse = reverse*10 + n%10;
            n/=10;
        }

        if(originalNumber==reverse){
            return true;
        }
        return false;
    }

    int WhileLoop::printSumOfDigitsInAGivenNumber(int n){
        int sum{};
        while(n>0){
            sum+=n%10;
            n/=10;
        }
        return sum;
    }

    bool WhileLoop::isArmstrongNumber(int n){ //cubes of each digit in a number's sum equal to original number
        int sum{};
        int originalNumber{n};
        while(originalNumber>0){
            int lastDigit = originalNumber%10;
            sum+=lastDigit*lastDigit*lastDigit;
            originalNumber/=10;
        }
        return sum == n;
    }

    bool WhileLoop::isAPerfectNumber(int n){ //All the divisor equal to the number then it is a perfect number 28.
    int sum{};
    int divisor{1};
    while(divisor<n){
        if(n%divisor==0){
            sum+=divisor;
        }
        divisor++;
    }
    return sum == n;
}

void WhileLoop::printPrimeNumberInRange(int start, int end){
    int divisor{2};
    while(start<=end){
        int count{};
        divisor = 1;
        while(divisor<=start){
            if(start%divisor==0){
                count++;
            }
            divisor++;
        }
        if(count==2){
            io.printInteger(start);
        }
        start++;
    }
}

void WhileLoop::printPrimeNumberInRangeUsingSqrtApproach(int start, int end){

    while(start<=end){
        int divisor{2};
        bool isPrime{true};
        while(divisor*divisor<=start){
            if(start%divisor==0){
                isPrime=false;
            }
            divisor++;
        }
        if(isPrime==true){
            io.printInteger(start);
        }
        start++;
    }
}

bool WhileLoop::checkTheGivenNumberIsAPrimeNumber(int number){
    int divisor{2};

    while(divisor*divisor<=number){
        if(number%divisor==0){
            return false;
        }
        divisor++;
    }
    return true;
}

void WhileLoop::printFibonacciSeriesForNTerms(int n){
    //Fibonacci starts with 0 
    int previous{};
    int current{1};
    io.printInteger(previous);
    io.printInteger(current);
    int start{2};
    int sum{};
    while(start <= n){
        sum = previous + current;
        io.printInteger(sum);
        previous = current;
        current = sum;
        start++;
    }
}

void WhileLoop::printSumOfFibonacciSeriesForNTerms(int n){
    int previous{};
    int current{1};
    int start{2};
    int sum{};
    while(start<=n){
        sum = previous + current;
        previous=current;
        current=sum;
        start++;
    }
    io.printInteger(sum);
}

void WhileLoop::printSquareOfGivenOneToNumber(int n){
    int start{1};
    while(start<=n){
        io.printInteger(start*start);
        start++;
    }

}

void WhileLoop::printCubeOfGivenOneToNumber(int n){
    int start{1};
    while(start<=n){
        io.printInteger(start*start*start);
        start++;
    }
}

void WhileLoop::printAllTheNumbersDivisibleByNInSpecifiedRange(int start, int end, int n){
    while(start<=end){
        if(start%n==0){
            io.printInteger(start);
        }
        start++;
    }
}

void WhileLoop::factorsForAGivenNumber(int n){
    int start{1};
    while(start*start<=n){
        if(n%start==0){
            io.printInteger(start);
        }
        start++;
    }
}
