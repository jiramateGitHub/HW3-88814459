#include "Fraction.h"

Fraction::Fraction(){
	numerator = 0;
	numerator = 0;
};

Fraction::Fraction(int n, int d){
	numerator = n;
	denominator = d;
};

int Fraction::getNumerator(){
	return numerator;
}
 
int Fraction::getDenominator(){
	return denominator;
};


void Fraction::setValue(int n, int d){
	numerator = n;
	denominator = d;
};

void Fraction::makeNewFormat(){
	int nnf = gcd(numerator,denominator);
	numerator = numerator/nnf;
	denominator = denominator/nnf;
};

void Fraction::print(){
	cout << numerator << "/" << denominator << endl;
};

void Fraction::multiply(Fraction frac2){
	int resultNum = numerator * frac2.getNumerator();
	int resultDen = denominator * frac2.getDenominator();
	return setValue(resultNum,resultDen);
};
