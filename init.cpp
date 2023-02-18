#include <iostream>

using namespace std;

class MyClass {
    public: 
    int myNum;
    string myString;
};

class Car {
    public:
    string brand;
    string model;
    int year;
};

class FuncTest {
    public:

    void Method(){
        cout << "Test Function";
    }
};

class paraFunc{
    public:
     int speed(int maxspeed);
};

int paraFunc::speed(int maxspeed){
    return maxspeed;
}


int main(){

    /*MyClass myObj;

    myObj.myNum = 15;
    myObj.myString = "Some text";

    cout << myObj.myNum <<endl;
    cout << myObj.myString;
    return 0;*/

    /*Car carobj1;
    carobj1.brand = "BMW";
    carobj1.model = "X5";
    carobj1.year = 1999;

    Car carobj2;
    carobj2.brand = "Ford";
    carobj2.model = "Mustang";
    carobj2.year = 1969;

    cout << carobj1.model <<endl;
    cout << carobj1.brand <<endl;
    cout << carobj1.year <<endl;
    cout << carobj2.model <<endl;
    cout << carobj2.brand <<endl;
    cout << carobj2.year <<endl;

    return 0;*/

    /*FuncTest test;
    test.Method();

    return 0;*/

    paraFunc myObj;
    cout << myObj.speed(200);
    return 0;
    
}