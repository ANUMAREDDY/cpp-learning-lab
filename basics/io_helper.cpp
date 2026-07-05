#include "io_helper.h"

#include <iostream>
#include <string>

void IOHelper::printString(std::string message){
        std::cout<<message<<"\n";
    }

void IOHelper::printInteger(int value){
    std::cout<<value<<"\n";
}
void IOHelper::printDouble(double value){
    std::cout<<value<<"\n";
}
void IOHelper::printBoolean(bool value){
    std::cout<<std::boolalpha<<value<<"\n";
}
std::string IOHelper::readString(){
    log("string");
    std::string input{};
    std::getline(std::cin, input);
    return input;
}
int IOHelper::readInteger(){
    log("integer");
    int input{};
    std::cin>>input;
    return input;
}
double IOHelper::readDouble(){
    log("double");
    double input{};
    std::cin>>input;
    return input;
}
bool IOHelper::readBoolean(){
    log("boolean");
    bool input{};
    std::cin >> std::boolalpha>>input;
    return input;
}

void IOHelper::log(std::string message){
    std::cout<<"Enter an input "<<message<<":"<<"\n";
}