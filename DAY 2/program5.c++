#include <iostream>
#include <string>

class Restaurant {
public:
    std::string name;
    std::string cuisine;
    int rating;

    void showDetails() {
        std::cout << name << " serves " << cuisine
                  << " food and has a rating of "
                  << rating << "/5.\n";
    }
};

int main() {

    Restaurant restaurant1;
    restaurant1.name = "Spice Garden";
    restaurant1.cuisine = "Indian";
    restaurant1.rating = 5;

    Restaurant restaurant2;
    restaurant2.name = "Pizza Hub";
    restaurant2.cuisine = "Italian";
    restaurant2.rating = 4;

    Restaurant restaurant3;
    restaurant3.name = "Sushi World";
    restaurant3.cuisine = "Japanese";
    restaurant3.rating = 5;

    restaurant1.showDetails();
    restaurant2.showDetails();
    restaurant3.showDetails();

    return 0;
}