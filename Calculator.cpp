//
// Created by rik on 1/4/18.
//

#include <cstdlib>
#include "Calculator.h"

Calculator::Calculator():operations {'+', '-', '*', '/'}{

}

/**
 * Recursive function for resolving the calculation given in the string.
 */
int Calculator::solve(int count, char *calculation) {
    //tries to find a mathematical operation to perform
    for (char operation : operations) {

        for (int i = 0; i < count; ++i) {
            //If an operation is found
            if (calculation[i] == operation) {

                int num1 = solve(i, &calculation[0]);

                int len2 = count - i - 1;

                int num2 = solve(len2, &calculation[i + 1]);

                return calculationUnit(num1, num2, operation);
            }

        }

    }
//    If there is no operation (left) returns the integer in the string.
    int temp = subStrToInt(count, calculation);
    return temp;

}

/**
 * Takes the numbers and operation character to perform.
 * Returns the result of the computation.
 */
int Calculator::calculationUnit(int number1, int number2, char operation) {
    switch (operation) {
        case '+':
            return number1 + number2;
        case '-':
            return number1 - number2;
        case '*':
            return number1 * number2;
        case '/':
            return number1 / number2;
        default:    return 0;
    }
}

/**
 * Returns the integer corresponding with the substring
 */
int Calculator::subStrToInt(int len, const char *num) {
    //create a new c string to use with atio()
    char ar[len + 1];
    for (int i = 0; i < len; ++i) {
        ar[i] = num[i];
    }
    ar[len] = '\0';
    return atoi(ar);
}

