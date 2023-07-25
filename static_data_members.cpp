//static data members refer to the entire class, not just one object


#include <iostream>
#include <string>
using namespace std;


class User{
    string status = "Gold"; // private
    static int user_count;

    public:
    static int get_user_count(){
        return user_count;
    }
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
            user_count++; // this is a static variable
        }
        ~User(){
            cout << "Destructor called" << endl;
            user_count--; // this is a static variable
        }
};
int User::user_count = 0; // this is a static variable that is outside of the class

int main(){
    User user("Allen", "Prasad", "Platinum");
    cout << User::get_user_count() << endl; 
    
}