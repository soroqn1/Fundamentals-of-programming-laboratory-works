// Сорочан Ярослав 123 група 24 варіант
#include <iostream>
#include <string>
#include <regex>

bool isValidChain(const std::string& chain) {
    // визначення шаблону регулярн
    std::regex pattern(".*[0-5].*[+E].*[6-9].*|.*[6-9].*[+E].*[0-5].*");
    return std::regex_match(chain, pattern);
}

int main() {
    std::string input;
    std::cout << "Enter a chain: ";
    std::cin >> input;

    if (isValidChain(input)) {
        std::cout << "The chain is valid." << std::endl;
    } else {
        std::cout << "The chain is invalid." << std::endl;
    }

    return 0;
}