#include <iostream>
#include <string>
#include <cmath>

using std::cout;
using std::cin;
using std::string;

int main()
{
    int base = 8;
    string value;

    cout << "Please enter a number with a decimal point: ";
    cin >> value;

    size_t ppos = value.find('.');
    if (ppos != string::npos) {
        value.replace(ppos,1,"");
    } else {
        ppos = value.size();
    }

    size_t mpos = 0;
    double dValue = (double)std::stoi(value, &mpos, base);
    if (mpos >= ppos)
    {
        dValue /= std::pow(base, (mpos - ppos));
    }

    std::cout << dValue << '\n';

    return 0;
}