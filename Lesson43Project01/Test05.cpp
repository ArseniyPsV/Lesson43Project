#include <iostream>

using namespace std;

int* create(int size) {
	int* array = new int[size];
	return array;
}

void destroy(int* array) {
	delete[] array;
}

int* test2() {
	int* a = new int;
	*a = 100;
	return a;
}

void test(double n) {
	int a = 10;
	double b = 2.5;
	n *= 100;
}

int* test1() {
	int a = 100;
	return &a;
}

int* test3() {
	static int a = 100;
	return &a;
}

int main() {

	int* pa = test3();
	cout << "Value: " << *pa << endl;
	cout << test3() << endl;

	sin(10);
	cos(100);
	test(10.5);
	test(20.4);
	test(30.3);

	cout << "Value: " << *pa << endl;

	delete pa;
	
	return 0;
}