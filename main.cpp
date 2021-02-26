#include <iostream>

using namespace std;

int main(int argc, char** argv) {

	cout << "How many pennies do you have?\n";
	int num_penny;
	cin >> num_penny;
	
	cout << "How many nickels do you have?\n";
	int num_nickel;
	cin >> num_nickel;
	
	cout << "How many dimes do you have?\n";
	int num_dime;
	cin >> num_dime;
	
	cout << "How many quarters do you have?\n";
	int num_quarter;
	cin >> num_quarter;
	
	cout << "How many half-dollar coins do you have?\n";
	int num_half;
	cin >> num_half;
	
	cout << "How many dollar coins do you have?\n";
	int num_dollar;
	cin >> num_dollar;
	
	cout << "You have " << num_penny << " pennies.\n";
	cout << "You have " << num_nickel << " nickels.\n";
	cout << "You have " << num_dime << " dimes.\n";
	cout << "You have " << num_quarter << " quarters.\n";
	cout << "You have " << num_half << " half-dollar coins.\n";
	cout << "You have " << num_dollar << " dollar coins.\n";
	
	num_nickel = num_nickel * 5;
	num_dime = num_dime * 10;
	num_quarter = num_quarter * 25;
	num_half = num_half * 50;
	num_dollar = num_dollar * 100;
	
	double total = num_penny + num_dime + num_nickel + num_quarter + num_half + num_dollar;
	
	cout << "\nThe value of all of your coins is: $" << total / 100 << ".";
	
	return 0;
}