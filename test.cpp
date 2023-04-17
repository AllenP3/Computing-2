#include <iostream>

using namespace std;

class simple{
    friend ostream& operator<<(ostream& out, simple& ref);
    friend istream& operator<<(istream& ip, simple& ref);

    private:
    string name_;
};

