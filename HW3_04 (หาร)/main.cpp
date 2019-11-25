/*
TASK : HW3_04
LANG : C++
AUTHOR : Jiramate Phuaphan
STUDENTID : 60160157
MAJOR : SE
*/
#include "Fraction.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	Fraction frac1;
	Fraction frac2;
	int n1,d1,n2,d2;
	cin >> n1 >> n2;
	cin >> d1 >> d2;
	frac1.setValue(n1,d1);
	frac2.setValue(n2,d2);
	frac1.dividey(frac2);
	frac1.makeNewFormat();
	frac1.print();
	return 0;
}
