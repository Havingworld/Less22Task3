#include <iostream>
#include <map>
#include <string>

bool areAnagrams(std::string& str1, std::string& str2) {
    // Проверяем, что длины строк равны
    if (str1.length() != str2.length()) {
        return false;
    }
    // Создаем частотные карты символов для каждой строки
    std::map<char, int> freq1, freq2;
    for (char c : str1) {
        freq1[c]++;
    }
    for (char c : str2) {
        freq2[c]++;
    }

    // Сравниваем частотные карты
    return freq1 == freq2;
}

int main() {
    std::string str1{ "" }, str2{ "" };
    
    std::cout << "enter first word: ";
    std::cin >> str1;
    std::cout << std::endl << "enter second word: ";
    std::cin >> str2;

    if (areAnagrams(str1, str2)) {
        std::cout << "The strings are anagrams" << std::endl;
    }
    else {
        std::cout << "The strings are not anagrams" << std::endl;
    }

    return 0;
}
