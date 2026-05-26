#include <iostream>
#include <string>

class Family {
public:
    std::string name;
    std::string relation;
    int age;

    void introduce() {
        std::cout << name << " is my " << relation
                  << " and is " << age << " years old.\n";
    }
};

int main() {

    Family member1;
    member1.name = "Ramesh";
    member1.relation = "Father";
    member1.age = 47;

    Family member2;
    member2.name = "jaysheela";
    member2.relation = "Mother";
    member2.age = 40;

    Family member3;
    member3.name = "priya";
    member3.relation = "sister";
    member3.age = 16;

    member1.introduce();
    member2.introduce();
    member3.introduce();

    return 0;
}