#include <iostream>
#include <string>
#include "user.h"

using namespace std;

int main(){
    User user;
    user.set_status("Gold");
    cout << user.get_status() << endl;

    //cout << user.status; // this isnt allowed as status is private
    //output_status(user);
    //cin >> user;
    //output_status(user);

}
