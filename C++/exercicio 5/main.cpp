#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	int val1;
	cout << "digite um numero: ";
	cin >> val1;
	if(val1%2 ==0){
		cout << "seu numero e par!";
	}else{
		cout << "seu numero e impar!"; 
	}
	
	return 0;
}
