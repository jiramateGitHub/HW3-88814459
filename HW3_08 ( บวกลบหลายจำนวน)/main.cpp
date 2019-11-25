/*
TASK : HW3_08
LANG : C++
AUTHOR : Jiramate Phuaphan
STUDENTID : 60160157
MAJOR : SE
*/
#include "Fraction.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int row,n,d;
	string check;
	cin >> row;
	Fraction frac[row];
	for(int i=0;i<row;i++){
		if(i<=1){
			cin >> check;
		}
		cin >> n >> d;
		frac[i].setValue(n,d);
		if(check == "add"){
			frac[0].add(frac[i]);
		}else if(check == "minus"){
			frac[0].minus(frac[i]);
		}
		
	}
	frac[0].makeNewFormat();
	frac[0].print();
	return 0;
}
