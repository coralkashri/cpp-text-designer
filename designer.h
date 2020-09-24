#ifndef DESIGNER_DESIGNER_H
#define DESIGNER_DESIGNER_H

#include <iostream>
#include <sstream>

namespace designer {
    enum Color {
        BLACK = -2,
        WHITE = -1,
        BLUE = 1,
        RED = 2,
        GREEN = 3,
        YELLOW = 4,
        MAGENTA = 5,
        CYAN = 6
    };

    std::string make_colored(const std::string &text, Color color, bool bold);
    std::string make_colored(const std::stringstream &text, Color color, bool bold);
    std::string make_colored(const char *text, Color color, bool bold);
    std::string make_conditioned_colored(const std::string &text, Color true_color, bool true_bold, Color false_color, bool false_bold, bool condition);
    std::string make_conditioned_colored(const std::stringstream &text, Color true_color, bool true_bold, Color false_color, bool false_bold, bool condition);
    std::string make_conditioned_colored(const char *text, Color true_color, bool true_bold, Color false_color, bool false_bold, bool condition);
};

#endif //DESIGNER_DESIGNER_H