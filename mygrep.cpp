#include <iostream>
#include <string>

int main() {
    std::string str; // gives the string a variable.
    std::cout << "Give a string from which to search for: "; // here i'm asking for what is the string we want to search from.
    std::getline(std::cin, str); // i used the getline function to get the full name as one string.
    std::string substr; //substring for the search string.
    std::cout << "Give search string: "; 
    std::cin >> substr; //search string, i figured, is enough like this instead of getline.
    std::cout << "\n"; // make things nice and neat :)
    size_t pos = str.find(substr); // now here comes the fun part. this part searches for the search string in the given main string. 
        if (pos != std::string::npos) { //if what we're looking for is found within the given string,
            std::cout << "\"" << substr << "\" found in \"" << str << "\" in position " << pos << std::endl; //the code will say this.
        }
        else {//otherwise,
            std::cout << "\"" << substr << "\" NOT found in \"" << str << "\"" << std::endl;//it will say this.
        }
        return 0;
    }


