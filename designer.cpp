#include "designer.h"

namespace designer {
    inline std::string bool_to_string(bool b) {
        return b ? "1" : "0";
    }

    std::string make_colored(const std::string &text, Color color, bool bold) {
        std::string new_text;
        new_text = "\033[";
        switch (color) {
            case Color::BLACK:
                new_text += bool_to_string(bold) + ";30m" + text;
                break;
            case Color::RED:
                new_text += bool_to_string(bold) + ";31m" + text;
                break;
            case Color::GREEN:
                new_text += bool_to_string(bold) + ";32m" + text;
                break;
            case Color::YELLOW:
                new_text += bool_to_string(bold) + ";33m" + text;
                break;
            case Color::BLUE:
                new_text += bool_to_string(bold) + ";34m" + text;
                break;
            case Color::MAGENTA:
                new_text += bool_to_string(bold) + ";35m" + text;
                break;
            case Color::CYAN:
                new_text += bool_to_string(bold) + ";36m" + text;
                break;
            case Color::WHITE:
                new_text += bool_to_string(bold) + ";37m" + text;
                break;
        }
        new_text += "\033[0m";
        return new_text;
    }

    std::string make_colored(const std::stringstream &text, Color color, bool bold) {
        return make_colored(text.str(), color, bold);
    }

    std::string make_colored(const char *text, Color color, bool bold) {
        return make_colored(std::string(text), color, bold);
    }

    std::string make_conditioned_colored(const std::string &text, Color true_color, bool true_bold, Color false_color, bool false_bold, bool condition) {
        if (condition) {
            return make_colored(text, true_color, true_bold);
        } else {
            return make_colored(text, false_color, false_bold);
        }
    }

    std::string make_conditioned_colored(const std::stringstream &text, Color true_color, bool true_bold, Color false_color, bool false_bold, bool condition) {
        return make_conditioned_colored(text.str(), true_color, true_bold, false_color, false_bold, condition);
    }

    std::string make_conditioned_colored(const char *text, Color true_color, bool true_bold, Color false_color, bool false_bold, bool condition) {
        return make_conditioned_colored(std::string(text), true_color, true_bold, false_color, false_bold, condition);
    }
}