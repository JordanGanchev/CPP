// #include <iostream>
// #include <sstream>
// using namespace std;

// int main()
// {

//     string buffer;
//     getline(cin, buffer);

//     istringstream istr(buffer);
//     int sum = 0;
//     ostringstream ostr;
//     while (istr >> buffer)
//     {
//         istringstream convertStrean(buffer);
//         int number;
//         if(convertStrean >> number){
//             sum += number;
//         }
//         else{
//             ostr << buffer << ' ';
//         }
//     }
//     cout << sum << endl << ostr.str() << endl;

//     return 0;
// }

#include <iostream>
#include <sstream>
using namespace std;

int main(void)
{

    string buffer;
    getline(cin, buffer);

    istringstream istr(buffer);
    int sum = 0;
    ostringstream ostr;
    while (istr >> buffer)
    {
        int number;
        try{
            sum += stol(buffer);
        }
        catch(...){
            ostr << buffer << ' ';
        }
    }
    cout << sum << endl << ostr.str() << endl;

    return 0;
}