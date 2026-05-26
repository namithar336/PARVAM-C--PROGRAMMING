#include<iostream>
#include<string>

void greetUser(std::string name);
int main(){
    greetUser("harini");
    greetUser("maanya");
    greetUser("akshaya");
    return 0;
}

void greetUser(std::string name){
    std::cout << "Hello " << name << "!" << std::endl;
}