#include <iostream>
using namespace std;

int y = 65;
void Increase(){
    y + 1;
}

int main(){
    cout << y <<endl;
    
    Increase();

    cout << y;
}