/*
TASK : HW3_01
LANG : C++
AUTHOR : Jiramate Phuaphan
STUDENTID : 60160157
MAJOR : SE
*/
#include "Fraction.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	Fraction frac;
	int n,d;
	cin >> n >> d;
	frac.setValue(n,d);
	frac.print();
	return 0;
}
