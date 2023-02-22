#include <iostream>

using namespace std;

class GradeBook {
    public:
    void set_course_name(string name);
    string course_name() const;
    void DisplayMessage() const;

    private:
    string course_name_;
};

void GradeBook::set_course_name(string name){
    course_name_ = name;
}

string GradeBook::course_name() const {
    return course_name_;
}

void GradeBook::DisplayMessage() const {
    cout <<"Grade book for " << course_name() << endl;
}


int main(){

    string course_name;
    GradeBook my_grade_book;

    cout << "Initital course name: "<<my_grade_book.course_name();

    cout << "\nPlease enter the course name: ";
    cin >> course_name;
    my_grade_book.set_course_name(course_name);
    my_grade_book.DisplayMessage();
    return 0;
    

}