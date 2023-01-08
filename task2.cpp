#include <iostream>
using namespace std;





int pyramidVolume(int length , int width , int height);
int pyramidVolumeInCc(int length , int width , int height);
double pyramidVolumeInCm(int length , int width , int height);
float pyramidVolumeInKm(float length2 , float width2 , float height2);



main(){


 int length , width , height , volume;
 string units;
 while (true)
 {
   
 
 cout << "Enter length of pyramid: " ;
 cin >> length;

 cout <<"Enter width of pyramid: ";
 cin >> width;

 cout << "Enter heigth of pyramid: ";
 cin >> height;

  cout << "Units: ";
  cin >> units;


 volume = pyramidVolume(length , width , height);
 

 if(units == "meters"){


 cout << volume  << " cubic meters" <<endl;


}


 if(units == "centimeters"){

 int result1 = pyramidVolumeInCc(length , width , height);
 cout << result1 << " cubic meters" << endl;
  }

if (units == "millimeters")
{
 double result2 = pyramidVolumeInCm(length , width ,height);
cout << result2 << " cubic meters" <<endl;
}
if (units == "kilometers")
{
   float result3 = pyramidVolumeInKm(length ,width,height);
   cout << result3 << " cubic meters" << endl;
}



 }

}





int pyramidVolume(int length , int width , int height){

   int volume = (length * width * height) / 3;
   return volume;




}


int pyramidVolumeInCc(int length , int width , int height){

 int lengthInCentimeter = length * 100;
 int widthInCentimeter = width * 100 ;
 int heightInCentimeter = height * 100 ;

 int volume1 =  (lengthInCentimeter * widthInCentimeter * heightInCentimeter) / 3;
 return volume1;
}



double pyramidVolumeInCm(int length , int width , int height){


 double lengthInMillimeter = length * 1000;
 double widthInMillimeter = width * 1000 ;
 double heightInMillimeter = height * 1000 ;

 double volume2 =  (lengthInMillimeter *widthInMillimeter* heightInMillimeter)/3;
 return volume2;

}

float pyramidVolumeInKm(float length2 , float width2 , float height2){

 float lengthInKilometer = length2 / 1000;
 float widthInKilometer = width2 / 1000 ;
 float heightInKilometer = height2 / 1000 ;

 float volume3 =  (lengthInKilometer * widthInKilometer * heightInKilometer) / 3;
 return volume3;







}

