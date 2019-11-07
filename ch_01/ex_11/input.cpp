//Exercise 1.1
#include <iostream>
#include <string>

int main() 
{
    //ask for the person's name
    std::cout << "Please enter your first name:";

    //read the name
    std::string name;   //define name
    std::cin >> name;   //read in name

    //write a reeting
    std::cout << "Hello, " << name << "!" << std::endl;

    return 0;
    
}