// encapsulation ensure that "sensitive" data is hidden from users
// Driver and car engine working idealogy
// 

#include <iostream>
#include <string>
using namespace std;

class User{
    string status = "Gold"; // private

    public:
        string first_name;
        string last_name;
        string get_status(){ // getter
            return status;      // status is accessible within the struct, just not outside of it
        }

        void set_status(string status){
            if(status == "Gold" || status == "Silver" || status == "Bronze"){
            this->status = status;
        }
        else{
            this->status = "No status";
        }}
        User(string first_name, string last_name, string status){
            cout << "Constructor called" << endl; // this is the constructor
            this->first_name = first_name;      // this refers to the variable up top
            this->last_name = last_name;
            this->status = status;
        }
        ~User(){
            cout << "Destructor called" << endl;
        }
};

int main(){
    User user("Allen", "Prasad", "Platinum");
    cout << user.get_status() << endl;
    user.set_status("Purple");
    cout << user.get_status() << endl;
    return 0;
}