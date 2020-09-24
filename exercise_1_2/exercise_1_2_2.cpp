#include <iostream>

int main()
{
    // Part 2: Palindrome Check

    // Input string from command-line
    std::string str;
    std::cout << "Enter String:" << std::endl;
    std::cin >> str;


    // Palindrome Check
    // WRITE YOUR PALINDROME CHECK HERE

    bool is_palindrome = true;
    int start = 0;
    int end = str.size() - 1;


    while (is_palindrome == true && (start < end)) {
    	if (str[start] == str[end]) {
    		start++;
    		end--;
    	} else {
    		is_palindrome = false;
    	}
    }

    if (is_palindrome == true) {
    	std::cout << str << " is a palindrome." << std::endl;
    } else {
    	std::cout << str << " is not a palindrome." << std::endl;
    }

    return 0;
}
