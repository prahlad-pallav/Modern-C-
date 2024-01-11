#include <iostream>
using namespace std;

class Car {
private:
    // Non-static data member initializer
    float fuel = 0;      
    float speed = 0;    
    int passengers = 0; 

public:

    Car(float amount) : fuel(amount), speed(0), passengers(0) {
       
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
    car.Accelerate();
    car.Accelerate();
    car.Dashboard();

    return 0;
}
