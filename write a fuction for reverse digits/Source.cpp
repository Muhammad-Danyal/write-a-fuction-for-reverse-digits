#include<iostream>
using namespace std;
int reverseDigit(int );

int main() {
	int num;
	cout << "enter the number\n";
	cin >> num;

	cout << reverseDigit(num);

	return 0;

}
int reverseDigit(int num) {
	int rem,rev;
	for (rev = 0; num != 0; num = num / 10)
	{
		rem = num % 10;
		rev = rem + (rev * 10);
	}
	cout << "the reverse of given number is :  ";
	return rev;
}