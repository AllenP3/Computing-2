//return type is not part of determining whether a function is unique
//only the type or number of input arguments are

#include <iostream>
#include <string>

using namespace std;

void swap(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}

void swap (string &a, string &b){
    string temp = a;
    a = b;
    b = temp;
}

int main(){
    int a = 10;
    int b = 20;
    string first_name = "John";
    string last_name = "Doe";
    swap(first_name, last_name);
    swap(a, b);
    swap(first_name, last_name);
    cout << first_name << " " << last_name << endl;

}