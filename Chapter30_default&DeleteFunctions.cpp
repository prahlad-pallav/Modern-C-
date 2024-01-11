#include <iostream>
using namespace std;

class Integer {
	int m_value{ 0 };

public:
	Integer() = default;

	/*Integer() {
		m_value = 0;
	}*/

	Integer(int value) {
		m_value = value;
	}

	Integer(const Integer&) = default;
	//Integer(const Integer&) = delete;

	void setValue(int value) {
		m_value = value;
	}

	//void setValue(float) = delete;
};

int main() {

	Integer i1;
	Integer i2(3);

	i1.setValue(22.2f);

	return 0;
}
