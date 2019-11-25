/*
TASK : HW3_07
LANG : C++
AUTHOR : Jiramate Phuaphan
STUDENTID : 60160157
MAJOR : SE
*/
#include "Fraction.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int row,n,d,index;
	cin >> row;
	Fraction frac[row];
	for(int i=0;i<row;i++){
		cin >> n >> d;
		frac[i].setValue(n,d);
		if(i>=1){
			frac[0].add(frac[i]);
		}
	}
	frac[0].makeNewFormat();
	frac[0].print();
	return 0;
}
