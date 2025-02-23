#include <string>
#include <iostream>
using namespace std;

int main()
{
    const double threshold = 1250.5;

    string actor;
    getline(cin, actor);

    double points;
    int n;
    cin >> points >> n;

    for (int i = 0; i < n && points <= threshold; i++) {
        string currentJuryName;
        getline(cin >> ws, currentJuryName);

        double currentJuryScore;
        cin >> currentJuryScore;

        points += currentJuryName.length() * currentJuryScore / 2;

    }

    cout.setf(ios::fixed);
    cout.precision(1);

    if (points > threshold) {
        cout << "Congratulations, " << actor << " got a nominee for leading role with " << points << "!" << endl;
    }
    else
    {
        cout << "Sorry, " << actor << " you need " << threshold - points << " more!" << endl;
    }


}