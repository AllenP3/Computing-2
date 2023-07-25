#ifndef USER_H
#define USER_H

#include <iostream>
#include <string.h>
#include <vector>

using namespace std;

class User{
    string status = "Platinum"; // private

    public:
        string first_name;
        string last_name;
        string get_status();
        void set_status(string status);
        
       //User(string first_name, string last_name, string status);
        //~User();
        friend void output_status(User user);
        friend std::istream& operator >> (std::istream& input, User &user);
};

#endif
