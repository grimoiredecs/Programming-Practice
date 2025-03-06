#include <iostream>

void printArray(int n){
    if (n ==0){
        std::cout<< n;
        return ;
    }
     printArray(n-1);
    std::cout << "," << n ;
}

int main(int argc, char** argv){
    
    printArray(323);

    return 0;
}
