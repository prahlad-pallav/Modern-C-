#include <iostream>
using namespace std;


class Car {
private:
	float fuel;
	float speed;
	int passengers;

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

	Car car;
	car.FillFuel(6);
	car.Accelerate();
	car.Accelerate();
	car.Dashboard();


	return 0;
}
