#include <iostream>


void printPattern(int n){
    
    std::cout << n ;
    if (n >0)
        {
            std::cout << " ";
        printPattern(n-5);
    }
    else return;
    std::cout <<" "<< n ;
}

int main(int argc, char** argv){

    printPattern(42130);
    return 0;
}
