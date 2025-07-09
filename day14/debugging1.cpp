#include <iostream>
#include <string>

int main() {
    std::string text = "HelloWorld";
    std::size_t index = text.find('Z');
    // find() will ret npos in this case 
    //if(index) {
    if(index != std::string::npos){
        std::cout << "Found at index: " << index;
    } else {
        std::cout << "Not found!";
    }

    return 0;
}
