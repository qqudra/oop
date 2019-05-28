#include <iostream>

using namespace std;

class Property {
public:
	double worth;
	virtual ~Property() {};
	Property(double worth_1) : worth(worth_1) {};
	virtual double tax() = 0;
};

class Appartment : public Property {
public:
	Appartment(double worth_2) : Property(worth_2) {};
	double tax() {
		return worth * 0.001;
	};
};

class Car : public Property {
public:
	Car(double worth_2) : Property(worth_2) {};
	double tax() {
		return worth * 0.005;
	};
};

class CountryHouse : public Property {
public:
	CountryHouse(double worth_2) : Property(worth_2) {};
	double tax() {
		return worth * 0.002;
	};
};

int main() {
	Property* mass[] = { new Appartment(1123123), new Appartment(145431235), new Appartment(1235123123), new Car(23422), new Car(125243), new CountryHouse(23341), new CountryHouse(350000) };
	for (int i = 0; i < 7; i++) cout << "Tax for property number " << i << " :" << mass[i]->tax() << "\n";
	for (int i = 0; i < 7; i++) delete mass[i];
	return 0;
}