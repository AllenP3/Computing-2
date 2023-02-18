#include <iostream>
using namespace std;

int y = 65;
void Increase(){
    y = y + 1;
}

int main(){
    cout << y <<endl;
    Increase;
    Increase;
    Increase;
    Increase;
    Increase;

    cout << y;
}