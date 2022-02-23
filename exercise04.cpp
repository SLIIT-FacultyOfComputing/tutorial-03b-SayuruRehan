#include <iostream>
using namespace std;

void print(int len, int wth);    //function declarations
void input(int len, int wth);

// Do not change the main() function
int main() //begin main
{
   int length = 10, width = 5;    //declaring variables
   input(length, width);
   print(length, width);
  
   return 0;
}//end main

// Do not change the print() function
void print(int len, int wth)       //implementing print function
{
   cout << "Length : " << len 
        << ", Width  : " << wth << endl;
}

// Implement the Input Function here
void input(int len, int wth)       //implementing print function 
{
   cout << "Length : " << len 
        << ", Width  : " << wth << endl;
}