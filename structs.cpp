//Structs
//Access Modifiers are public, private, protected
// public can be accessed by any object created using the class
// private can only be used within the class definition
// protected can be used within the class definition and any class that inherits from it

// structs are by default public
// classes are by default private
// only difference between the struct and the class are their default access modifiers

// structs are used for smaller objects that hold data
// classes are used for larger objects that hold data and methods

//structs are used to hold data sometimes (pods)
//structs arent usually used for methods or functionality
#include <iostream>
using namespace std;

struct User{
    string first_name;
    string last_name;
    string get_status(){
        return status;      //status is accessible within the struct, just not outside of it
    }
    private:
    string status = "Platinum";
    
};

int main(){
    
    User me;
    me.first_name = "Allen";
    me.last_name = "Prasad";
    //me.status = "Platinum";

    cout << "Status: " << me.get_status() << endl;
    return 0;
}
