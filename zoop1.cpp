//Создать абстрактный класс Figure с функциями вычисления площади и периметра,
// а также функцией, выводящей информацию о фигуре на экран.
//Создать производные классы : Rectangle(прямоугольник), Circle(круг), Triangle(треугольник).
//
//Создать массив n фигур и вывести полную информацию о фигурах на экран.
#include <iostream>
#include <vector>
#include <cmath>
#include <memory>
using namespace std;

// Абстрактный класс Figure
class Figure {
public:
    double PI  = 3.14;
    virtual double perimetr() const = 0;
    virtual double ploshad() const = 0;
    virtual void print() const = 0;
    virtual ~Figure() = default;
};

// Прямоугольник
class Rectangle : public Figure{
    int dlina, shirina;

public: Rectangle(int w, int h) : dlina(w), shirina(h){}
      double perimetr() const override {
          return 2 * dlina + 2 * shirina;
      }
      double ploshad() const override {
          return dlina * shirina;
      }
      void print() const override {
          cout << "периметр прямоугольника: " << perimetr() << endl;
          cout << "площадь прямоугольника: " << ploshad() << endl;
      }

};

// Круг
class Circle : public Figure {
    double radius;
public: Circle(int r) : radius(r){}
      double perimetr() const override {
          return 2 * PI * radius;
      }
      double ploshad() const override {
          return pow(2, radius)* PI;
      }
      void print() const override {
          cout << "периметр круга:" << perimetr() << endl;
          cout << "площадь круга:" << ploshad() << endl;
      }
};

// Треугольник
class Triangle : public Figure {
    int a, b, c;
public : Triangle(int x, int y, int z): a(x),b(y),c(z){}
       double perimetr() const override {
           return a + b + c;
       }
       double ploshad() const override {
           return a* b / 2;
       }
       void print() const override {
           cout << "периметр треугольника: " << perimetr() << endl;
           cout << "площадь треугольника: " << ploshad() << endl;
       }
};

// Главная функция
int main() {
    setlocale(LC_ALL, "ru");
    vector < shared_ptr<Figure>> figures;
    figures.push_back(make_shared <Rectangle>(5, 8));
    figures.push_back(make_shared<Circle>(7));
    figures.push_back(make_shared<Triangle>(5, 8, 3));
    for (const auto& f : figures) {
        (*f).print();
    }

}
