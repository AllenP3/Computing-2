// objects are instances of classes (instantiation)

// a constructor makes sure any new objects being instantiated are initialized properly
// constructor names are the same as the class name
// static members are shared by all objects of the class (number of users)

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
    
    //User user;
    //user.first_name = "Allen";

    vector<User> users;


    User user1, user2, user3;

    user1.first_name = "Allen";
    user1.last_name = "Prasad";
    user2.first_name = "Bob";
    user2.last_name = "The Builder";
    user3.first_name = "Jake";
    user3.last_name = "The Dog";

    //users.push_back(user1);
    users.push_back(user1);
    users.push_back(user2);
    users.push_back(user3);
    
    User user;
    user.first_name = "Jke";
    user.last_name = "The Dog";
    
    cout << users.size() << endl;
    cout << add_user(users, user) << endl;
    cout << users.size() << endl;
    //return 0;


    //cout <<users[0].first_name << endl;
    return 0;
}

