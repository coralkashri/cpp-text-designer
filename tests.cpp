#include <iostream>

#include "designer.h"

int main() {
    std::cout << designer::make_colored("Hello, World!", designer::color::GREEN, true) << std::endl;
    return 0;
}
