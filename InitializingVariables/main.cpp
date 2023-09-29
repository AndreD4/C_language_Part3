#include <iostream>

using namespace std;

// This program will calculate the area of a room in square feet

int main() 
{
//    unintialized variables
//    int age;
//    cout << age << endl; 

//    initialized variables
//    int age {21};
//    cout << age << endl;
    
    int room_width {0};
    int room_length {0};
    
    cout << "Enter the width of the room: ";
    cin >> room_width;
    
    cout << "Enter the length of the room: ";
    cin >> room_length;
    
    
    cout << "The area of the room is " << room_width * room_length << " sqaure feet" << endl;
    
    
    
  return 0;
}