#include <iostream>
#include <string>

void findSubstring(const std::string &mystring, const std::string &substring){
    size_t position = mystring.find(substring);
    if (position != std::string::npos) {
        std::cout << "\"World\" found at position: " << position << std::endl;
    } else {
        std::cout << "\"World\" not found" << std::endl;
    }    
}

int main(){

    std::string greetings = "Hello, World!";
    std::cout << greetings << std::endl;

    std::string str1 = "Hello";
    std::string str2 = "World";
    std::cout << str1 + ", " + str2 + "!" << std::endl;

    std::string sub = greetings.substr(7, 5); // "World"

    //Find substring
    findSubstring(greetings, std::string("World"));

    greetings.replace(7, 5, "Universe");
    std::cout << greetings << std::endl;

    return 0;
}