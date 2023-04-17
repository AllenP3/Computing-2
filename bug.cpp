#include <iostream>

using namespace std;

class Bug
{
    public:
    void Reset();
    void Up();
    int position()const;

    private:
        int position_ = 0;
};

void Bug::Reset(){
    position_ = 0;
}

void Bug::Up(){
    position_ = position_ + 10;
    if(position_ >= 100){
        Reset();
    }
}

int Bug::position() const{
    return position_;
}

int main(){
    Bug climber;
    cout << "Bug's intitial position is: "<<climber.position();
    cout << endl;

    climber.Reset();
    cout << "Bug's intitial position is: " << climber.position();
    cout << endl;

    for (auto i = 0; i <= 10; i++){
        climber.Up();
        cout << "Bug's current position: " << climber.position();
        cout << endl;
    }

    return 0;
}

