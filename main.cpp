/*Program to take the age from user and decide accordingly
* 1. If age < 18
*    print - not eligible for job
* 2. If age >= 18 and <= 54
*    print - eligible for job
* 3. If age >= 55 and <= 57
*    print - eligible for job, but retirement soon
* 4. If age > 57
*    print - "Retirement time"
*/

#include<iostream>
using namespace std;

int main() {
	int age;
	cin >> age;

	if (age < 18) {
		cout  << "Not eligible for job" << endl;
	}
	else if (age <= 54) {
		cout << "Eligible for job" << endl;
	}
	else if (age <= 57) {
		cout << "Eligible for job, but retirement soon" << endl;
	}
	else {
		cout << "Retirement time" << endl;
	}
}