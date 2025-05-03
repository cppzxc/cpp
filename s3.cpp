
#include <iostream>
#include <string>
int main()
{
    setlocale(LC_ALL, "ru");
    bool duo = false;

    std::string text = "да не пойти бы тебе наххуй";
    for (size_t i = 0; i < text.size() - 1;i++) {
        if (text[i] == text[i + 1])
            duo = true;
    }
    if (duo == 1 )
        std::cout << "Да";
}

