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
    
    
    
    
    cout << "Enter the width of the room: ";
    int room_width {0};
    cin >> room_width;
    
    cout << "Enter the length of the room: ";
    int room_length {0};
    cin >> room_length;
    
    
    cout << "The area of the room is " << room_width * room_length << " sqaure feet" << endl;
    
    
    
  return 0;
}