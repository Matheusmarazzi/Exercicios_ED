#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	int B, b, h, result;
	cout << "digite o valor da base maior: ";
	cin >> B;
	cout << "digite o valor da base menor: ";
	cin >> b;
	cout << "digite o valor da altura: ";
	cin >> h;
	result = ((B+b)*h)/2;
	cout << "a area do trapezio e: " << result;
	
	 
	
	return 0;
}
