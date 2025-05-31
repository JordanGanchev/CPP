#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<string> products;

    //int numProducts;

    vector<string>::size_type numProducts;
    cin >> numProducts;
    cin.ignore();
    products.reserve(numProducts);

    while (numProducts--)
    {
        string product;
        getline(cin, product);
        products.push_back(product);
    }

    sort(products.begin(), products.end());

    for (vector<string>::size_type curProduct = 0; curProduct < products.size(); curProduct++)
        cout << curProduct+1 << '.' << products[curProduct] << endl;
    

    return 0;
}