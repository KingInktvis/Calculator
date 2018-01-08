#include <iostream>
#include <cstring>
#include "Calculator.h"

int main(int argc, char *argv[]) {
    char calc[] = "100*4-50/2";
    int len = static_cast<int>(strlen(calc));
    int res;
    Calculator obj;

    res = obj.solve(len, calc);
    std::cout << res;
    return 0;
}