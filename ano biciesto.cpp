#include <iostream>
#include <string.h>
using namespace std;


int main() {
	
 long int ano, est;
 
 cout<<"Ingrese el año que desea saber si es biciesto =";
 cin>>ano;
 if((ano%4==0 && ano%100!=0) || (ano%100==0 && ano%400==0))
 {
 	cout<<"ano bisiesto";
 }
 else 
 {
 	cout<<"ano no bisiesto";
 }
 	
 return 0;   
}
