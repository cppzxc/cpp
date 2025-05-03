#include <iostream>
#include <string>
#include <windows.h>
#include <fstream>
using namespace std;

class BankProguct {
protected:
	string ClientName;
	double Balance;
public:
	BankProguct(string CN, double B) :ClientName(CN), Balance(B) {}
	virtual double GetMoney(int n) {
		if (n == 0) { n = 1; };
		return Balance;
	}
	virtual void print() {
		cout << ClientName << " " << Balance << endl;
	}
};

class Deposit : public BankProguct {
private:
	double yearsing;
public:
	Deposit(string CN, double B) : BankProguct(CN, B), yearsing(0.05) {}

	double GetMoney(int n) override {
		if (n == 0) { n = 1; };
		cout << ClientName << " " << yearsing * Balance * n + Balance << endl;
		return 0;
	}
	void print() override {
		cout << ClientName << " " << Balance << " " << yearsing << endl;
	}
};

class Credit : public BankProguct {
private:
	double yearsing;
public:
	Credit(string CN, double B) : BankProguct(CN, B), yearsing(0.1) {}

	double GetMoney(int n) override {
		if (n == 0) { n = 1; };
		cout << ClientName << " " << yearsing * Balance * n + Balance << endl;
		return 0;
	}
	void print() override {
		cout << ClientName << " " << Balance << " " << yearsing << endl;
	}
};

class Investment : public BankProguct {
private:
	double yearsing;
public:
	Investment(string CN, double B) : BankProguct(CN, B), yearsing(0.07) {}

	double GetMoney(int n) override {
		if (n == 0) { n = 1; };
		cout << ClientName << " " << yearsing * Balance * n + Balance << endl;
		return 0;
	}
	void print() override {
		cout << ClientName << " " << Balance << " " << yearsing << endl;
	}
};

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	//ifstream infile("in.txt");
	//string line;
	//while (getline(infile, line)) {
	//	cout << line << endl;
	//}

	const int size = 10;
	BankProguct* A[size];
	A[0] = new Deposit("Иван", 100);
	A[1] = new Deposit("Артём", 500);
	A[2] = new Deposit("Денис", 1500);

	ofstream outfile("out.txt");
	for (int i = 0; i < 10; i++) {
		A[i]->print();
		A[i]->GetMoney(5);
		//outfile << A[i]->print() <<
	}

}
//in.txt
//Иван 100
//Артём 500
//Денис 1500
