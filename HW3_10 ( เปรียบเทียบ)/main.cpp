/*
TASK : HW3_10
LANG : C++
AUTHOR : Jiramate Phuaphan
STUDENTID : 60160157
MAJOR : SE
*/
#include "Fraction.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int n,d;
 	Fraction f1,f2;
 	cin >> n >> d;
 	f1.setValue(n,d);
 	cin >> n >> d;
 	f2.setValue(n,d);
 	if(f1.compare(f2) == 0){
 		cout << "fraction 1 equal fraction 2" << endl;
	}else if(f1.compare(f2) == -1){
 		cout << "fraction 1 less than fraction 2" << endl;
 	}else{
 		cout << "fraction 1 greater than fraction 2" << endl;
 	}
 	return 0;
}
