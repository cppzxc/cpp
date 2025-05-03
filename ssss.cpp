//Определить, сколько в строке гласных букв(при условии, что текст записан кириллицей).

#include <iostream>
#include <string>

int main() {
    int col = 0;
    std::string glas[] = { "а", "е", "и", "о", "у", "ю", "я" };
    std::string text = "Сегодня будет дождь";

    for (size_t i = 0; i < text.size(); i++) {
        std::string ch(1, std::tolower(text[i]));  // приводим к строчной букве
        for (int i = 0; i < 7; ++i) {
            std::string g = glas[i]; {
                if (ch == g) {
                    col++;
                    break;
                }
            }
        }
    }
    std::cout << col;
    return 0;
}
