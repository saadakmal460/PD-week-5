#include <iostream>
using namespace std;



int value1 = 10;
int value2 = 20;

int check();

main(){

 int x = value1;
 value1 = 100;
 x = 20;
 
 int value2 = check();
 cout << value1 << " " <<value2;

 
 
 

}





int check(){

  int value1 = 40;
 
 return value1 + value2;




}