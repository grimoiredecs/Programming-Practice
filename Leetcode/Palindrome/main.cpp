#include <iostream>
#include <stdexcept>
#include <string>

bool isPalindrome(int x){
    if (x <0 || (x%10 ==0 && x!=0)){
        return false;
    }
    long int reversedNum = 0;
    
    int tmp = x;
    while (tmp !=0){
        reversedNum = reversedNum*10 + (tmp%10);
        tmp/= 10;
    }
    return (reversedNum ==  x);
}



int main(int argc, char** argv) {
    for (int i = 1; i < argc; ++i) { // Start from 1 since argv[0] is the program name
        try {
            // Convert argv[i] to an integer
            int num = std::stoi(argv[i]);

            // Check if the number is palindromic
            bool result = isPalindrome(num);

            // Print the result
            std::cout << "Test Case " << i << ": " << num 
                      << " -> " << (result ? "Palindrome" : "Not Palindrome") 
                      << std::endl;
        } catch (const std::invalid_argument& e) {
            // Handle invalid input (non-integer strings)
            std::cerr << "Test Case " << i << ": Invalid input '" 
                      << argv[i] << "' (not an integer)" 
                      << std::endl;
        } catch (const std::out_of_range& e) {
            // Handle out-of-range errors
            std::cerr << "Test Case " << i << ": Invalid input '" 
                      << argv[i] << "' (out of range)" 
                      << std::endl;
        }
    }

    return 0;
}
