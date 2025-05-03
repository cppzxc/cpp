#include <iostream>
#include <string>

// Базовый класс (родительский)
class Animal {
protected:
    std::string name;

public:
    Animal(const std::string& name) : name(name) {}

    void eat() {
        std::cout << name << " ест." << std::endl;
    }

    virtual void makeSound() {  // virtual позволяет переопределять метод
        std::cout << name << " издаёт звук." << std::endl;
    }
};

// Производный класс (наследник)
class Cat : public Animal {
public:
    Cat(const std::string& name) : Animal(name) {}

    // Переопределение метода
    void makeSound() override {
        std::cout << name << " говорит: Мяу!" << std::endl;
    }

    // Новый метод, специфичный для Cat
    void purr() {
        std::cout << name << " мурлычет: Мррр..." << std::endl;
    }
};

int main() {
    setlocale(LC_ALL, "ru");
    Animal animal("Неизвестное животное");
    Cat cat("Барсик");

    animal.eat();          // Неизвестное животное ест.
    animal.makeSound();    // Неизвестное животное издаёт звук.

    cat.eat();             // Барсик ест.
    cat.makeSound();       // Барсик говорит: Мяу!
    cat.purr();            // Барсик мурлычет: Мррр...

    return 0;
}
