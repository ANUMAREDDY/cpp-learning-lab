#ifndef PRINTER_H
#define PRINTER_H

#include <string>

class IOHelper{
    public:
    void log(std::string message);
    void printString(std::string message);
    void printInteger(int value);
    void printDouble(double value);
    void printBoolean(bool value);
    std::string readString();
    int readInteger();
    double readDouble();
    bool readBoolean();
};

#endif