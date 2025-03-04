#include <iostream>
#include <string>

using namespace std;
int main()
{
    string books;
    getline(cin, books);
    string book;

    int count = 0;

    while (true) {

        getline(cin, book);

        if (book == "No More Books") {
            cout << "The book you search is not here!" << endl << "You checked " << count << " books." << endl;
            break;
        }

        if (book == books) {
            cout << "You checked " << count << " books and found it." << endl;
            break;

        }

        count += 1;
    }

}
