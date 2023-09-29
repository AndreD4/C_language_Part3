#include <iostream>
#include <climits>  // make sure you include climits for interger types
                    // Similar information for floating points numbers
                    // is contained in <cfloat>



using namespace std;

int main() 
{
    cout << "sizeof information" << endl;
    cout << "=================================" << endl;
    
    cout << "char: " << sizeof(char) << "bytes." << endl;
    cout << "int: " << sizeof(int) << "bytes." << endl;
    cout << "unsigned int: " << sizeof(unsigned int) << "bytes." << endl;
    cout << "short: " << sizeof(short) << "bytes." << endl;
    cout << "long: " << sizeof(long) << "bytes." << endl;
    cout << "lomg long: " << sizeof(long long) << "bytes." << endl;
  

    cout << "=================================" << endl;

  
  return 0;
}