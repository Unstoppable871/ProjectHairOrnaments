#include <iostream>
#include <string>
#include <vector>
using namespace std;

class HairOrnaments {
    string name;
    string colour;
    double price;

public:

    HairOrnaments(const string& n, const string& c,double p):
        name(n),colour(c),price(p){}

    virtual void displayInfo(const string& msg) = 0;
    virtual ~HairOrnaments() = default;

    string getName() {
        return name;
    }

    string getColour() {
        return colour;
    }

    double getPrice() {
        return price;
    }

};

class Category {
    vector<HairOrnaments*> ornaments;

public:
    Category(const vector<HairOrnaments*> &Ornaments):ornaments(Ornaments){}

    void displayInfo() const {
        for (const auto& ornament : ornaments) {
            ornament->displayInfo("Hair Ornament details: ");
        }
    }

    ~Category() {
        for (auto ornament : ornaments) {
            delete ornament;
        }
    }
};

int main()
{
    std::cout << "Hello World!\n";
}

