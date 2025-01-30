#include<iostream>
using namespace std;

int main() {

	// TASK # 1

	int a;
	int b;
	int c;

	cout << "ENTER 3 INTEGERS:";
	cin >> a >> b >> c;

	// SUM

	int sum = a + b + c;
	cout << "SUM: " << sum << endl;

	// AVARAGE

	double avarage = sum / 3;
	cout << "AVARAGE: " << avarage << endl;

	// PRODUCT
	int product = a * b * c;
	cout << "PRODUCT: " << product << endl;

	// SMALLEST AND LARGEST
	int smallest = a;
	int largest = a;

	if (b < smallest) smallest = b;
	if (c < smallest) smallest = c;
	cout << "SMALLEST NUM: " << smallest << endl;

	if (b > largest) largest = b;
	if (c > largest) largest = c;
	cout << "LARGEST NUM: " << largest << endl;

	//TASK # 2

	int a = 0;
	int b = 1;
	int c = 2;
	int d = 3;
	int e = 4;
	int f = 5;
	int g = 6;
	int h = 7;
	int i = 8;
	int j = 9;
	int k = 10;

	cout << "INTEGER" << endl;

	cout << a << endl;
	cout << b << endl;
	cout << c << endl;
	cout << d << endl;
	cout << e << endl;
	cout << f << endl;
	cout << g << endl;
	cout << h << endl;
	cout << i << endl;
	cout << j << endl;
	cout << k << endl;

	cout << "SQUARE " << endl;

	cout << a * a << endl;
	cout << b * b << endl;
	cout << c * c << endl;
	cout << d * d << endl;
	cout << e * e << endl;
	cout << f * f << endl;
	cout << g * g << endl;
	cout << h * h << endl;
	cout << i * i << endl;
	cout << j * j << endl;
	cout << k * k << endl;

	cout << "CUBE " << endl;

	cout << a * a * a << endl;
	cout << b * b * b << endl;
	cout << c * c * c << endl;
	cout << d * d * d << endl;
	cout << e * e * e << endl;
	cout << f * f * f << endl;
	cout << g * g * g << endl;
	cout << h * h * h << endl;
	cout << i * i * i << endl;
	cout << j * j * j << endl;
	cout << k * k * k << endl;


	// TASK # 3

	int total_km;
	cout << "Enter total km daily: ";
	cin >> total_km;

	int cost_per_liter;
	cout << "Enter cost per liter of gasoline: ";
	cin >> cost_per_liter;

	int avarage_km_per_liter;
	cout << "Enter avarage km per liter";
	cin >> avarage_km_per_liter;

	//TOTAL COST #

	int total_cost = (total_km / avarage_km_per_liter) * cost_per_liter;
	cout << "Total km driven per day: " << total_km << endl;
	cout << "Cost per liter of gasoline: " << cost_per_liter << endl;
	cout << "Avarage km per liter: " << avarage_km_per_liter << endl;
	cout << "Total cost per day: " << total_cost << endl;














	return 0;

}