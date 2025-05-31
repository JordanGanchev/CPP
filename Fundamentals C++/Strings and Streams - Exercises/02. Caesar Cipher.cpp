// #include <iostream>
// #include <sstream>
// using namespace std;

// int main()
// {

//     string buffer;
//     getline(cin, buffer);
    
//     for (char c : buffer){
//         cout << char(c + 3); 
//     }
//     return 0;
// }

//-----------------------------------------------

// #include <iostream>
// #include <sstream>
// using namespace std;

// void encrypt(string & buffer){
//     for (char & c : buffer) {
//         c += 3;
//     }
// }


// int main()
// {
//     string buffer;
//     getline(cin, buffer);

//     encrypt(buffer);

//     cout << buffer << endl;

//     return 0;
// }

//----------------------------------------------------


// #include <iostream>
// #include <sstream>
// #include <sstream>
// using namespace std;

// string encrypt(istream & istr){
//     ostringstream result;

//     char c;
//     while(istr >> c){
//         c += 3;
//         result << c;
//     }
//     return result.str();
// }


// int main()
// {
//     string buffer;
//     getline(cin, buffer);
//     istringstream istr(buffer);

//     encrypt(istr);

//     cout << encrypt(istr) << endl;

//     return 0;
// }


#include <iostream>
#include <sstream>
using namespace std;

string encrypt(istream & istr){
    ostringstream result;
    char c;

    while(istr.get(c)){
        c += 3;
        result << c;
    }
    return result.str();
}

int main()
{
    string buffer;
    getline(cin, buffer);
    istringstream istr(buffer);

    string encrypted = encrypt(istr);

    cout << encrypted << endl;

    return 0;
}
