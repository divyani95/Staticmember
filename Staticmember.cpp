// Staticmember.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
class test {
public:
    int a;
    static int count;
	test() {
		a = 10;
		count++;

	}
};
int test::count = 0;
int main() {
	test t1;
	test t2;
	cout << t1.count << endl;
	cout << t2.count << endl;
	cout << test::count << endl;
}


