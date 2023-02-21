#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	int idade;
	cout << "digite sua idade: ";
	cin >> idade;
	if(idade >0 && idade<=11){
		cout << "crianca";
	}else if(idade >11 && idade<=17){
		cout << "adolescente";
	}else if(idade > 17 && idade<=49){
		cout << "adulto";
	}else if(idade>49){
		cout << "idoso";
	}
	
	
	
	return 0;
	
}
