#include <iostream>
using namespace std;


class Car {
private:
	float fuel;
	float speed;
	int passengers;

public:

	// constructor
	Car() : fuel(0), speed(0), passengers(0) {

	};

	Car(float amount) {
		fuel = amount;
		speed = 0;
		passengers = 0;
	}
	
	~Car() {
		cout << "Car object is destroyed!" << endl;
	}


public:
	void FillFuel(float amount) {
		fuel = amount;	
	}
	void Accelerate() {
		speed++;
		fuel -= 0.5f;
	}
	void Brake() {
		speed = 0;
	}
	void AddPassengers(int count) {
		passengers = count;
	}
	void Dashboard() {
		cout << "Fuel: " << fuel << endl;
		cout << "Speed: " << speed << endl;
		cout << "Passengers: " << passengers << endl;
	}
};

int main() {

	Car car(4);
	//car.FillFuel(6);
	car.Accelerate();
	car.Accelerate();
	car.Dashboard();




	return 0;
}
