#include <iostream> 
using namespace std; 
int main() { 
	double f,c;
	cout << "Fahrenheit\tCentigrade" << endl; 
	for(f = -50; f <= 300; f = f+10){
    c = (f - 32.0) * 5.0 / 9.0;
	cout<<f<<"\t"<<c<<endl;
	}
	return 0;    
}