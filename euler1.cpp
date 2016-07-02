#include <iostream>
using namespace std;

int sum_multiples(int factor);

int main() {
	
	int m_3;
	int m_5;
	int m_15;

	m_3 = sum_multiples(3);
	m_5 = sum_multiples(5);
	m_15 = sum_multiples(15);

	cout << "The answer is " << m_3 + m_5 - m_15;

	return 0;
}

int sum_multiples(int factor) {

	int sum = 0;

	for(int multiplier = 1; multiplier * factor < 1000; multiplier++){
		sum += multiplier * factor;
	}

	return sum;
}