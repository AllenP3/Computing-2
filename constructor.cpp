// constructors are usually implicitly called when an object is created
// for more control, we can explicitly call a constructor
// a constructor has the same name as the class and no return type

// destructors are called when an object is destroyed
// a destructor has the same name as the class but with a ~ in front of it and no return type

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
int main(){
   // User me;  wont work as we have a constructor now
    User user("Allen", "Prasad", "Platinum");
    cout <<user.first_name << endl;
    return 0;
}