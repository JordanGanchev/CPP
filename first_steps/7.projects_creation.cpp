#include <iostream>  

using std::cout;
using std::endl;
using std::cin;
using std::string;

int main() 
{ 
    const int HOURS_NEEDED_FOR_ONE_PROJECT = 3;

    string archutectName;
    cin >> archutectName;

    int projectsCount;
    cin >> projectsCount;

    int neededHours = projectsCount * HOURS_NEEDED_FOR_ONE_PROJECT;

    cout 
        << "The architect " << archutectName <<
        " will need " << neededHours <<
        " hours to complete " << projectsCount << " project/s."
    << endl;

    return 0;
}