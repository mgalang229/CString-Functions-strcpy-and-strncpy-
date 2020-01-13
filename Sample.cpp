#include <iostream>
#include <cstring>
using namespace std;

int main(){
	
	// Using strcpy and strncpy functions
	char x[] = "good morning ";
	char y[25], z[15];
	
	cout << "The string character in array x is " << x << endl;
	cout << "The string character in array y is " << strcpy(y, x) << endl;
	
	strncpy(z , y, 4);
	z[5] = '\0';
	cout << "The string character in array z is " << z << endl;
	return 0;
}
