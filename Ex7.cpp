#include <iostream>
#include <string>
#include <clocale>
using namespace std;
class Animal
{
public:
	int paws;
	string gender;
	string name;
	string ColorWool;
	int mouth;
	string GenderOwner;
	int sizehouse;
};
class Dog:Animal
{
public:
	Dog(int x,int y,int z,string w,string s,string d,string a)
	{
		this->paws = x;
		this->mouth = y;
		this->sizehouse = z;
		this->gender = w;
		this->ColorWool = s;
		this->GenderOwner = d;
		this->name = a;
	}
	void print()
	{
		cout << "_________________________" << endl;
		cout << "Количество лап:"<<paws << endl;
		cout << "Пол:"<<gender << endl;
		cout << "Имя:"<<name << endl;
		cout << "Цвет шерсти:"<<ColorWool << endl;
		cout << "Количество зубов:"<<mouth << endl;
		cout << "Размер дома:"<<sizehouse << endl;
		cout << "Пол хозяина:"<<GenderOwner << endl;
		cout << "_________________________" << endl;
	}
};
class Cat:Animal
{
public:
	Cat(int x, int y, int z, string w, string s, string d, string a)
	{
		this->paws = x;
		this->mouth = y;
		this->sizehouse = z;
		this->gender = w;
		this->ColorWool = s;
		this->GenderOwner = d;
		this->name = a;
	}
	void print()
	{
		cout << "_________________________" << endl;
		cout << "Количество лап:" << paws << endl;
		cout << "Пол:" << gender << endl;
		cout << "Имя:" << name << endl;
		cout << "Цвет шерсти:" << ColorWool << endl;
		cout << "Количество зубов:" << mouth << endl;
		cout << "Размер дома:" << sizehouse << endl;
		cout << "Пол хозяина:" << GenderOwner << endl;
		cout << "_________________________" << endl;
	}
};
class Kesha :Animal
{
public:
	Kesha(int x, int y, int z, string w, string s, string d, string a)
	{
		this->paws = x;
		this->mouth = y;
		this->sizehouse = z;
		this->gender = w;
		this->ColorWool = s;
		this->GenderOwner = d;
		this->name = a;
	}
	void print()
	{
		cout << "_________________________" << endl;
		cout << "Количество лап:" << paws << endl;
		cout << "Пол:" << gender << endl;
		cout << "Имя:" << name << endl;
		cout << "Цвет шерсти:" << ColorWool << endl;
		cout << "Количество зубов:" << mouth << endl;
		cout << "Размер дома:" << sizehouse << endl;
		cout << "Пол хозяина:" << GenderOwner << endl;
		cout << "_________________________" << endl;
	}
};
int main()
{
	setlocale(LC_ALL, "rus");
	int x, y, z;
	string w, s, d, a;
	cout << "Введите количество лап,количество зубов,размер дома,пол,цвет шерсти,пол хозяина,имя Кошки" << endl;
	cin >> x >> y >> z >> w >> s >> d >> a;
	Cat murzik( x ,y, z, w, s, d, a );
	murzik.print();
	cout << "Введите количество лап,количество зубов,размер дома,пол,цвет шерсти,пол хозяина,имя Собаки" << endl;
	cin >> x >> y >> z >> w >> s >> d >> a;
	Dog sharik(x, y, z, w, s, d, a);
	sharik.print();
	cout << "Введите количество лап,количество зубов,размер дома,пол,цвет шерсти,пол хозяина,имя Попугая" << endl;
	cin >> x >> y >> z >> w >> s >> d >> a;
	Kesha inokentij(x, y, z, w, s, d, a);
	inokentij.print();
	system("pause");

}