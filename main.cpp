#include <iostream>
#include <cstring>
#include "Calculator.h"

int main(int argc, char *argv[]) {
    int len = static_cast<int>(strlen(argv[1]));
    int res;
    Calculator obj;
    res = obj.solve(len, argv[1]);
    std::cout << res << '\n';
    return 0;
}