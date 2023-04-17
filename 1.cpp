#include <iostream>
using namespace std;


class TallyCounter{
    public:
        void Reset();
        void Count();
        int value() const;

    private: 
    int value_;
};

void TallyCounter::Count(){
    value_++;
}
void TallyCounter::Reset(){
    value_ = 0;
}
int TallyCounter::value() const{
    return value_;
}

int main(){
    TallyCounter boarding_counter;
    boarding_counter.Reset();
    boarding_counter.Count();
    std::cout << "Numer people boader: " << boarding_counter.value() << endl;
}