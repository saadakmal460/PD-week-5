#include <iostream>
using namespace std;



int hoursRequired(int hours , int days , int workers);



main(){

 int hoursNeeded , days , workers , result;

 cout << "Enter number of neede hours: ";
 cin >> hoursNeeded;

 cout << "Enter number of days: ";
 cin >> days;

 cout << "Enter number of workers: ";
 cin >> workers;

 result = hoursRequired(hoursNeeded , days , workers);
 cout << result << endl;
 if(result >= hoursNeeded){
   
  int hoursLeft = result ;
  cout << "Yes! " << hoursLeft << " hours left";
 }

 if (result < hoursNeeded)
 {
    int extraHours = hoursNeeded - result ;
    cout << "Not enough time!" << extraHours << " hours needed."; 
 }
 


}


int hoursRequired(int hours , int days , int workers){

 int workingHours = 8 + 2 * workers;
 int workingDays = days - (days/10);
 int total = workingHours * workingDays;
 return total;

}