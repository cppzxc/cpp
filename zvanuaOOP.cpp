//4  класса: Сотрудник (родительский), Менеджер, Разработчик, Продажник(че то такое не помню точное название),
// надо было сделать методы расчета зп для каждого сотрудника(для каждого по своему вычисляется) 
// при условии что нужно использовать переопределение функции из родительского класса, 
// также нужно было сделать добавление новых сотрудников, вывод информации о них в том числе о их зп
#include <iostream>
#include <vector>
#include <memory>
using namespace std;

class Sotrudnik {
protected:
    string fio;
public:
    Sotrudnik(string name) : fio(name) {}
    virtual double rasschitatZP() const = 0;
    virtual void printInfo() const {
        cout << fio << " — зарплата: " << rasschitatZP() << " руб." << endl;
    }
    virtual ~Sotrudnik() = default;
};

class Menedzher : public Sotrudnik {
    int oklad;
public:
    Menedzher(string name, int oklad) : Sotrudnik(name), oklad(oklad) {}
    double rasschitatZP() const override {
        return oklad;
    }
};

class Razrabotchik : public Sotrudnik {
    int oklad;
    int proekty;
public:
    Razrabotchik(string name, int oklad, int proekty) : Sotrudnik(name), oklad(oklad), proekty(proekty) {}
    double rasschitatZP() const override {
        return oklad + proekty * 10000;
    }
};

class Prodazhnik : public Sotrudnik {
    int stavka, oborot;
public:
    Prodazhnik(string name, int stavka, int oborot) : Sotrudnik(name), stavka(stavka), oborot(oborot) {}
    double rasschitatZP() const override {
        return stavka + oborot * 0.05;
    }
};

int main() {
    setlocale(LC_ALL, "ru");
    vector<shared_ptr<Sotrudnik>> sotrudniki;
    sotrudniki.push_back(make_shared<Menedzher>("Иванов И.И.", 50000));
    sotrudniki.push_back(make_shared<Razrabotchik>("Петров П.П.", 60000, 2));
    sotrudniki.push_back(make_shared<Prodazhnik>("Сидоров С.С.", 30000, 400000));

    for (const auto& s : sotrudniki) {
        s->printInfo();
    }

    return 0;
}
