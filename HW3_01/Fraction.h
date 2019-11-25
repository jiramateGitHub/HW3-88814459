#ifndef FRACTION_H
#define FRACTION_H
#include <iostream>
using namespace std;
class Fraction
{
	public:
		Fraction();
		Fraction(int n, int d);
		int getNumerator();
		int getDenominator();
		void setValue(int n, int d);
		void print();
	
	private:
		int numerator; 
		int denominator; 
		int gcd(int a, int b){
			int c;
			while(a != 0) {
				c = a;
				a = b % a;
				b = c;
			}
			return b;
		}
};

#endif
