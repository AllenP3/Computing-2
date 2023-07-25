#ifndef INHERITANCE_H
#define INHERITANCE_H

#include <iostream>
#include <string>
#include <vector>
#include "user.h"

using namespace std;

class Teacher : public User 
{
    public:
    vector<string> classes_teaching;    
    void output();
};
#endif