//4  класса: Сотрудник (родительский), Менеджер, Разработчик, Продажник(че то такое не помню точное название),
// надо было сделать методы расчета зп для каждого сотрудника(для каждого по своему вычисляется) 
// при условии что нужно использовать переопределение функции из родительского класса, 
// также нужно было сделать добавление новых сотрудников, вывод информации о них в том числе о их зп
#include <memory>
#include <iostream>
#include <String>
#include <vector>
using namespace std;
class Sotrudnik {
protected:
    string fio;
public: Sotrudnik(string name):fio(name){}
    virtual int oklad() const = 0;
    //virtual 
    virtual void Print() const {
        cout << fio << " " << oklad()  << endl;
    }
    virtual ~Sotrudnik() = default;
};

class Menedger: public Sotrudnik {
    int stavka, hour ;
public:Menedger(string name, int s, int h) : Sotrudnik(name),stavka(s),hour(h) {}
      int oklad() const override {
          return stavka * hour;
      }


};
class Razrab :public Sotrudnik {
    int hour, project, stavka, completed;
public: Razrab(string name,int h, int p, int s, int c): Sotrudnik(name), hour(h),project(p),stavka(s),completed(c){}
      int oklad() const override {
          return hour * stavka + project * completed;
      }

};
class Seller:public Sotrudnik {
    int Prodano;
public: Seller(string name,int col) :Sotrudnik(name),Prodano(col){}
      int oklad() const override {
          return Prodano * 1000;
      }

};
int main()
{
    setlocale(LC_ALL, "ru");
    vector<shared_ptr<Sotrudnik>> Sotrudniki;
    Sotrudniki.push_back(make_shared<Menedger>("Корпухов ", 600, 120));
    Sotrudniki.push_back(make_shared<Razrab>("Долбоёб", 80, 10000, 800, 2));
    Sotrudniki.push_back(make_shared<Seller>("хуесос", 100));
    //Sotrudniki.push_back(make_shared<Razrab>())
    for (const auto all : Sotrudniki)
        all->Print();
    return 0;
}

