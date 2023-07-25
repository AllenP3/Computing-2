#include "user.h"
using namespace std;


        void User::set_status(string status){
            if(status == "Gold" || status == "Silver" || status == "Bronze"){
            this->status = status;
        }
        else{
            this->status = "No status";
        }}

        string User::get_status(){
            return status;      // status is accessible within the struct, just not outside of it
        }
        
      //  User:: ~User(){
       //     cout << "Destructor" << endl;
        //}
        void output_status(User user);
        std::istream& operator >> (std::istream& input, User &user);
;

void output_status(User user){
    cout << user.status << endl;
}

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
    input >> user.first_name >> user.last_name >> user.status;
    return input;
}