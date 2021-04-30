#include <iostream>
#include <cmath>

#define M_PI 3.14159265358979323846

using namespace std;

double factorial(double n);
double xRad(double x);
double cosX(int accuracy, double xRad);
int func(char c);
int cti(string str);

int main(int argc, char **argv) {
	double angle = 89.999999;
	int accuracy;

	if(argv[1]) accuracy = cti(argv[1]);
    else {
        cin >> accuracy; 
    }

	cout << "\n\tcos(" << fixed << angle;
	cout.precision(40);
	cout << ") = " << cosX(accuracy, xRad(angle)) << endl; 
	printf("\tAccuracy:%d\n", accuracy);
	return 0;
}

double xRad(double x) {
	return 	(x * M_PI / 180);
}

double cosX(int accuracy, double xRad) {
	double cosx = 1;
	for(int i = 0, n = 2; i < accuracy; i++, n+=2) {
	  cosx -= pow(xRad, n) / factorial(n) * pow(-1, i);
	}
	return cosx;
}

double factorial(double n) {
	if( n <= 1.0 ) {
		return (1.0);
	} else {
		return ( n * factorial(n - 1.0));
	}
}

int func(char c) {
    if( c == 48) return 0;
    if( c == 49) return 1;
    if( c == 50) return 2;
    if( c == 51) return 3;
    if( c == 52) return 4;
    if( c == 53) return 5;
    if( c == 54) return 6;
    if( c == 55) return 7;
    if( c == 56) return 8;
    if( c == 57) return 9;
    return -1;
}

int cti(string str) {
    int len = 0;
    int charToInt = 0;
    int last;

    for(int i = 0; str[i]!='\0'; i++) {
        len+=1;
    }
    int multiple = 1;
    last = len - 1;
    for(int i = 0; i < last; i++) {
        multiple *= 10;
    }
    for(int i = 0;multiple>0;multiple/=10, i++) {
        charToInt += func(str[i]) * multiple;
    }
    return charToInt;
}
