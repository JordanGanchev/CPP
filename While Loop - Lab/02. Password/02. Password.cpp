
#include <iostream>
using namespace std;
int main()
{
    string username, password, currentPasswordAttempt;
    cin >> username >> password;

    while (cin >> currentPasswordAttempt && currentPasswordAttempt != password);
    
    cout << "Welcome " << username << '!';
    
}
