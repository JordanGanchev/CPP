#include <iostream>
//#include <array>
using namespace std;

static const int MAX_SIZE = 99;

int main() 
{
    int m1[MAX_SIZE];
    int m2[MAX_SIZE];

    // example
    //array<int, MAX_SIZE> m2;
    //m2[5] = 5;
    //int num = m2.size();
    //int maxelement = m2.max_size();

    int n;
    cin >> n;

    for (int curr = 0; curr < n; curr++){
        int n1, n2;
        cin >> n1 >> n2;

        if(curr % 2 ){
            m2[curr] = n1;
            m1[curr] = n2;
        }else{
            m1[curr] = n1;
            m2[curr] = n2;
        }
    }
    
    for (int curr = 0; curr < n; curr++){
        cout << m1[curr] << ' ';
    }

    cout << endl;

    for (int curr = 0; curr < n; curr++){
        cout << m2[curr] << ' ';
    }

    cout << endl;
    

    return 0;

}