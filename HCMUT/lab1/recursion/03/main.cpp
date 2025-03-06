#include <iostream>

int findMax(int* arr, int length){

    if (length <=0){
        return -1;
    }
    if (length ==1){
        return *arr;
    }
    int maxx = findMax(arr + 1, length-1);
    return (*arr > maxx? *arr : maxx);
}


int main(int argc, char** argv){


    
    int arr[] = {10, 5, 7, 9, 15, 6, 11, 8, 12, 2};
    std:: cout << findMax(arr,4);

    return 0;
}