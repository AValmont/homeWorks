#include <iostream>


int main()
{
    int num;
    
    std::cout << "Enter your number:" << std::endl;
    std::cin >> num;
    std::cout << "You entered the number:" <<std::endl;
    std::cout << num << std::endl;
    std::cout << "\n\n";

    std::cout << "Enter your word" << std::endl;
    std::string new_word;
    std::cin >> new_word;
    std::cout << "You enteder the word:" << std::endl;
    std::cout << new_word << std::endl;
    

    
    return EXIT_SUCCESS;
}
