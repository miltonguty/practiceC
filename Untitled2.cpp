#include <math.h>
# include <stdio.h>
# include <conio.h>
# include <iostream>
#include <stdlib.h>
# include <iomanip>
using namespace std;
 int main (){
 	 int num=1;
 	  int e=1;
 	 int result=0;
 
 	 for( int i=2; i<10; i++){
 	 	
 	 	result= num*9 +i;
 	 	e = e +i;
 	 	
	  cout << num<<'x'<<'9'<<'+'<<i<<'=' <<result <<endl ;
	  num =(num*10 )+ i;
	  }
	  
 return 0;
 }
