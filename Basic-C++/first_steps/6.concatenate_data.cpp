#include <iostream>  

using std::cout;
using std::endl;
using std::cin;
using std::string;

int main() 
{ 
    string firstName;
    string lastName;
    int age;
    string city;
    
    cin >> firstName >> lastName >> age >> city;
    cout 
        << "You are " << firstName << ' ' << lastName 
        << ", a " << age << "-years old person from " << city << "."
    << endl;    
    
    
    return 0;
}