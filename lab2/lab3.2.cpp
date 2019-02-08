#include <iostream> 
using namespace std; 
int main() {
	double numofGallons, numOfMiles;
	cout<<"Enter the number of gallons the car can hold"<<endl;
	cin>>numofGallons;
	cout<<"Enter the number of miles it can be driven on a full tank;"<<endl;
	cin>>numofMiles;
	cout<<"The mileage of the car is : "<<numofMiles/numofGallons<<"mpg"<<endl;