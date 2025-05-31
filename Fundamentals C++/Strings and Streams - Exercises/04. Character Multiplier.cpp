#include <iostream>

using namespace std;

int main()
{
    string str1, str2;

    cin >> str1 >> str2;

    int index = 0;
    int sum = 0;
    while (true)
    {
        
        int n1, n2;
        
        if (index < str1.length()) 
            n1 = str1[index];
        else
            n1 = 1;
            
        if (index < str2.length())
            n2 = str2[index];
        else
            n2 = 1;
            
        sum += n1 * n2;

        index++;
        if (index >= str1.length() && index >= str2.length())
            break;
    }
    
    cout << sum << endl;
    return 0;
}