
#include <math.h>
# include <stdio.h>
# include <conio.h>
# include <iostream>
#include <stdlib.h>
# include <iomanip>
using namespace std;
int b, p_entera_a;
double a;
double potencia(int b);
double redondeo(double a,int b);

int main1() {
cout<<"leer un numero real: ";cin>>a;
cout<<"numero de decimales : ";cin>>b;
redondeo(a, b);
system("pause");
return 0;
}

double mipow(double base, int d1){
	int ans = 1; 
	for(int i=0; i<d1; i++)
	   ans *= base;
	   cout << " raised to the power "<<  ans;
	   return ans;
	}
	
double potencia(int d1)
{ 
double base = 10;
 double elevado = mipow(base, d1);
 return elevado;
}

double redondeo(double a1,int b1){
p_entera_a=int (a1*potencia(b1)+0.5);
 cout<<"numero "<<a1<< " con decimales : "<<(p_entera_a/potencia(b1))<<endl;
}

