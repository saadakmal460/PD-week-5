#include <iostream>
using namespace std;


float priceOfM(int priceOfVehical , int typeOfVehical );
float priceOfE(int priceOfVehical , int typeOfVehical);
float priceOfSedan(int priceOfVehical , int typeOfVehical);
float priceOfVan(int priceOfVehical , int typeOfVehical);
float priceOfTruck(int priceOfVehical , int typeOfVehical );


main()
{
 int price; 
 char type;

while (true)
{
    

 cout << "Enter price od vehical: ";
 cin >> price;

 cout << "Enter vehical type code: ";
 cin >> type;   


 if (type == 'M')
 {
        
float priceOfBike = priceOfM( price , type );
cout << "The final price of vehical of type " << type << " after adding tax is"<< priceOfBike;
 
 }

if (type == 'E')
{
    float priceOfElectric = priceOfE( price , type );
    cout << "The final price of vehical of type " << type << " after adding tax is "<< priceOfElectric;
}

if (type == 'S')
{
   float priceOfCar = priceOfSedan( price , type );
    cout << "The final price of vehical of type " << type << " after adding tax is "<< priceOfCar;

}

if (type == 'V')
{
     float priceOfV = priceOfVan( price , type );
    cout << "The final price of vehical of type " << type << " after adding tax is "<< priceOfV;
}

if (type == 'T')
{
    float priceOfT = priceOfTruck( price , type );
    cout << "The final price of vehical of type " << type << " after adding tax is "<< priceOfT;
}


}
}


float priceOfM(int priceOfVehical , int typeOfVehical ){

 float tax = (priceOfVehical * 0.06) / 100;
 float finalPrice = tax + priceOfVehical;
 return finalPrice;

}


float priceOfE(int priceOfVehical , int typeOfVehical ){

 float tax = (priceOfVehical * 0.08) / 100;
 float finalPriceofElectric = tax + priceOfVehical;
 return finalPriceofElectric;

}

float priceOfSedan(int priceOfVehical , int typeOfVehical ){

 float tax = (priceOfVehical * 0.1) / 100;
 float finalPriceofSedan = tax + priceOfVehical;
 return finalPriceofSedan;


}


float priceOfVan(int priceOfVehical , int typeOfVehical ){

 float tax = (priceOfVehical * 0.12) / 100;
 float finalPriceofVan = tax + priceOfVehical;
 return finalPriceofVan;


}



float priceOfTruck(int priceOfVehical , int typeOfVehical ){

 float tax = (priceOfVehical * 0.15) / 100;
 float finalPriceofTruck = tax + priceOfVehical;
 return finalPriceofTruck;


}
