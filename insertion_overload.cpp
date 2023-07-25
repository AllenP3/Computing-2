// Overloading << operator for insertion

#include <iostream>
#include <vector>
using namespace std;

class User{
    string status = "Platinum"; // private

    public:
        string first_name;
        string last_name;
        string get_status(){
            return status;      // status is accessible within the struct, just not outside of it
        }
        
       User(string first_name, string last_name, string status){
            cout << "Constructor" << endl; // this is the constructor
            this->first_name = first_name;      // this refers to the variable up top
            this->last_name = last_name;
            this->status = status;
        }
        ~User(){
            cout << "Destructor" << endl;
        }
};

int add_user(vector<User> &users, User user){
    for(int i = 0; i < users.size(); i++){
        if(users[i].first_name == user.first_name && users[i].last_name == user.last_name){
            return i;
        }
    }
    users.push_back(user);
    return users.size() - 1;

}

std::ostream& operator << (std::ostream& output, User user){
    output << "First name: " << user.first_name << "\nLast name: " << user.last_name;
    output << "\nStatus: " << user.get_status();
    return output;
}
std::istream& operator >> (std::istream& input, User &user){
    input >> user.first_name >> user.last_name;
    return input;
}

int main(){
   // User me;  wont work as we have a constructor now
    User user("Allen", "Prasad", "Platinum");
    cout << user << endl;
    cin >> user;
    cout << user << endl;
}