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

void Fraction::add(Fraction frac){
	int resultDen1,resultNum1,resultNum2;
	int resultNum,resultDen;
	if(denominator != frac.getDenominator()){
		resultDen1 = denominator * frac.getDenominator();
		resultNum2 = denominator * frac.getNumerator();
		resultNum1 = numerator * frac.getDenominator();
		
		resultNum = resultNum1 + resultNum2;
		resultDen = resultDen1;
	}else{
		resultNum1 = numerator + frac.getNumerator();
		resultDen1 = denominator;
		
		resultNum = resultNum1;
		resultDen = resultDen1;
		
	}
	return setValue(resultNum,resultDen);
};

void Fraction::minus(Fraction frac){
	int resultDen1,resultNum1,resultNum2;
	int resultNum,resultDen;
	if(denominator != frac.getDenominator()){
		resultDen1 = denominator * frac.getDenominator();
		resultNum2 = denominator * frac.getNumerator();
		resultNum1 = numerator * frac.getDenominator();
		
		resultNum = resultNum1 - resultNum2;
		resultDen = resultDen1;
	}else{
		resultNum1 = numerator - frac.getNumerator();
		resultDen1 = denominator;
		
		resultNum = resultNum1;
		resultDen = resultDen1;
		
	}
	return setValue(resultNum,resultDen);
};


