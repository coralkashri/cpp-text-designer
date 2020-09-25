#include <iostream>

#include "designer.h"

int main() {
    std::cout << designer::make_colored("Hello, World!", designer::color::GREEN, true) << std::endl;
    std::cout << designer::make_colored(std::stringstream() << "Number: " << 55 << " More details", designer::color::RED, true) << std::endl;
    return 0;
}