#include <iostream>
using namespace std;

int volume(int height, int width, int length);    //volume function

int main() //begin main
{
    int box1Height, box1Width, box1Length;  //declaring variables
    int box2Height, box2Width, box2Length;
    int totalVolume, totalSurface;
    
    cout << "Enter Box 1 Height : ";    //user input box1
    cin >> box1Height;
    cout << "Enter Box 1 Width : ";
    cin >> box1Width;
    cout << "Enter Box 1 Length : ";
    cin >> box1Length;
    
    cout << "Enter Box 2 Height : ";    //user input box2
    cin >> box2Height;
    cout << "Enter Box 2 Width : ";
    cin >> box2Width;
    cout << "Enter Box 2 Length : ";
    cin >> box2Length;
    
    totalVolume = volume(box1Height, box1Width, box1Length) + volume(box2Height, box2Width, box2Length);    //calculating total volume
             
    cout << "Volume of Box is: " << totalVolume << endl;    //final output
    
    return 0;
}//end main

// Implement the Volume() function here
int volume(int height, int width, int length)    //implementing volume function
{
  int totalVolume;    //declaring variable totalVolume
  
  return height * width * length;    //return total volume
}