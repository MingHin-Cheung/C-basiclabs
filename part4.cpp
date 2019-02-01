// Fix this program that computes the area of circle where the Radius is interactively supplied 
// It should work for radius values like 1.5 
#include <iostream> 
using namespace std;
int main() {
	double radius;
	cout << "Enter radius: "; 
	cin  >> radius;
	cout << "area = " << 3.14 * radius * radius << endl;
}