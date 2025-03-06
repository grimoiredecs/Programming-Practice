#include <iostream>


void printHailstone(int number){
    if (number == 1){
        std::cout << number ;
        return;
    }
    else {
        if (number % 2 ==0){
            printHailstone(number/2);
        }
        else printHailstone(number*3 +1);
    } 
    std::cout << " " << number ;
}

int main(int argc, char** argv){


    printHailstone(32);
    return 0;
}