/*============================================================================
/3. Write a program that prompts the user for an integer and then prints
 *  out all prime numbers up to that integer.For example,
 *  when the user enters 20, the program should print: 2 3 5 7 11 13 17 19
 *  Recall that a number is a prime number if it is not divisible
 *  by any number except 1 and itself.Hint: You will need nested loops
 */

#include <iostream>
#include <cmath>
using namespace std;
int main(){
   int num,i,count,n;
   cout << "Enter max range: ";
   cin >> n;
   for(num = 1;num<=n;num++){
       count = 0;
       for(i=2;i<=num/2;i++){
          if(num%i==0){
              count++;
              break;
          }
        }

   if(count==0 && num!= 1)
      cout << num << endl;
   }
    return 0;
}
