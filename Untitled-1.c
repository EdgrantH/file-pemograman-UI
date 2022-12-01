#include <stdio.h>

enum months{
    JAN =5, FEB, MAR, APR, MAY, JUN, JUL, AUG, SEP, OCT, NOV, DEC
};

int main(){
    const char *monthName[] = {"", "Januari", "February", "March", 
		"April", "May", "June", "July", "August", "September", "October", 
		"November", "December", "a", "b", "c"};  

	for (enum months month = JAN; month <= DEC; month++) {
		printf ("%2d%11s\n", month, monthName[month]);
		
	}
    return 0;
}