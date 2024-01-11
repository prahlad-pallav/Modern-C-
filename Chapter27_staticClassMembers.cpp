#include <iostream>
using namespace std;

class Car {
private:
    // Non-static data member initializer
    float fuel = 0;
    float speed = 0;
    int passengers = 0;
    static inline int totalCount = 0; // Using inline specifier

public:

    Car() : fuel(0), speed(0), passengers(0) {
        ++totalCount;
    }

    Car(float amount) : fuel(amount), speed(0), passengers(0) {
        ++totalCount;
    }



    ~Car() {
        cout << "Car object is destroyed!" << endl;
        --totalCount;
    }

public:
    void FillFuel(float amount) {
        this->fuel = amount;
    }

    void Accelerate() {
        this->speed++;
        this->fuel -= 0.5f;
    }

    void Brake() {
        this->speed = 0;
    }

    void AddPassengers(int count) {
        this->passengers = count;
    }

    void Dashboard() {
        cout << "Fuel: " << fuel << endl;
        cout << "Speed: " << speed << endl;
        cout << "Passengers: " << passengers << endl;
        cout << "Total count: " << totalCount << endl;
    }

    static void ShowCount() {
        cout << "Total count: " << totalCount << endl;
    }
};

    int main() {
        Car::ShowCount();

        Car car(4);
        car.Accelerate();
        car.Accelerate();
        car.ShowCount();
        car.Dashboard();

        return 0;
    }
