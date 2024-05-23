#include <iostream>
#include <string>
using namespace std;

class HairOrnaments {
    string name;
    string colour;
    double price;

public:
    HairOrnaments(const string& n, const string& c,double p):
        name(n),colour(c),price(p){}
       
};

int main()
{
    std::cout << "Hello World!\n";
}

