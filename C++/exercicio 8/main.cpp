#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	int an1,an2,an3;
	cout << "digite o primeiro angulo: ";
	cin >> an1;
	cout << "digite o segundo angulo: ";
	cin >> an2;
	cout << "digite o terceiro angulo: ";
	cin >> an3;
	if(an1 == an2 && an2 ==an3){
		cout<<"trinagulo equilatero";
	}else if(an1 == an2 || an1 == an3 || an2 == an3){
		cout<<"trinagulo isoceles";
	}else if(an1 != an2 && an2 !=an3){
		cout<<"trinagulo escaleno";
	}
	
	
	
	
	return 0;
}
