#include <iostream>

/*using namespace std;

class Animal{
    friend void petAnimal();
    public:
        string getName();
        void Animal();
    private:
        string name;
};

void petAnimal(){
    
}

*/

/*
~~~~~~ Recap ~~~~~~
-Friend Function >< Class member function?
A class member function is a method inside the public area of a class.
Hence, it belongs to the class.
A friend function is a stand-alone function. It does not belong to the class, but it is declared ass a friend of that class. 
It is declared inside the class but outside of public and private section. The implementation of the friend function must be outside of
the class. A friend function can freely access the private variables of a class.

~~~~~~ OPERATOR OVERLOADING ~~~~~~
Types of operators
- Arithmetic operaotrs: + - / * %
- Logical operators: < > <= >=
- Stream manipulating operators: << >>
- Unary operators: ++ --
*Syntax:
<return_type> operator <sign>(argument list)

Eg. double operator+(Animal x, Animal y)
{
    return x.weight + y.weight;
}

*Overloading Stream Insertion Operator (<<)
- It is a friend function!

class Fraction{
    friend std::ostream& operator<<(std::ostream& out, const Fraction& a);
    friend std::istream& operator >> (std::istream& input, Fraction& y);

    public:
    Fraction(int num1=1, int den1=1);
        int getNum();
        int getDen();
        void setNum(int x);
        void setDen(int x);

    private:
        int num;
        int den;
};

int getNum(){

}

int getDen(){

}
std::ostream& operator<<(std::ostream& out, const Fraction& a){
    out << '(' << a.num << '/' << a.den << ')' ;
    return out;
}

*Overloading Stream Extraction Operator (>>)    Input format is: "(1/3)"
std::istream& operator >> (std::istream& input, cFraction& y){
    
    input.ignore(1);    //Ignore the opening bracket
    input >> y.num;
    input.ignore(1);     //Ignore the division sign
    input >> y.den;
    input.ignore(1);    //Ignore the closing bracket
    return input;
}

int main(){
    Fraction x1 = Fraction(1,5);
    cout << x1; // The result on the console will be written in this format: (1/5)
    Fraction x2;
    cin >> x2;
}



*/

class Date{

};

std::istream& operator >> (std::istream& input, Date& y){
    
    input >> y.date;
    input.ignore(1);     //Ignore the period
    input >> y.month;
    input.ignore(1);     //Ignore the period
    input >> y.year;
    return input;
}