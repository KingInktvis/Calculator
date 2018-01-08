//
// Created by rik on 1/4/18.
//

#ifndef CALCULATOR_CALCULATOR_H
#define CALCULATOR_CALCULATOR_H


class Calculator {

private:


    char operations[4];
    int calculationUnit(int number1, int number2, char operation);
    int subStrToInt(int len, const char *num);
public:
    Calculator();
    int solve(int count, char *calculation);
};


#endif //CALCULATOR_CALCULATOR_H
