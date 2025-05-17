// // #include <iostream>
// // using namespace std;

// // int main() {
// //     string text;
// //     cin >> text;

// //     string result = "";

// //     for (char c : text) {
// //         if (result.find(c) == string::npos) {
// //             result += c;
// //         }
// //     }

// //     cout << result << endl;

// //     return 0;
// // }

//-------------------------------------------------

// #include <iostream>
// using namespace std;

// int main() {
//     string text;
//     cin >> text;

//     bool used[256] = {false}; 
//     string result = "";

//     for (char c : text) {
//         if (!used[(unsigned char)c]) {
//             result += c;
//             used[(unsigned char)c] = true;
//         }
//     }

//     cout << result << endl;

//     return 0;
// }


// #include <iostream>
// using namespace std;

// int main() {
//     string text;
//     cin >> text;

//     string result = "";

//     if (!text.empty()) {
//         result += text[0];

//         for (int i = 1; i < text.length(); i++) {
//             if (text[i] != text[i - 1]) {
//                 result += text[i];
//             }
//         }
//     }

//     cout << result << endl;

//     return 0;
// }


//--------------------------------------------------------


#include <iostream>
#include <sstream>
using namespace std;

string replaceDuplicates(const string & buffer){
    ostringstream result;

    char curr = buffer[0];
    for(char c : buffer){
        if (c != curr)
            result << curr;
            curr = c;
    }

    result << curr;
    return result .str();

}

int main() {
    
    string buffer;
    getline(cin, buffer);

    cout << replaceDuplicates(buffer) << endl;

    return 0;
}
