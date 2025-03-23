#include<iostream>
#include<array>
using namespace std;

/*
1.array only works as 
-> pass by reference
-> doesn't work as pass by value
2.vector start with zero capacity
3. double it's capacity when size is full
4. It cause reallocation overhead
5. performance cost of it
->New memory allocation happens, which is expensive.
->All elements are copied to the new memory block.
->Old memory is freed, which may add delay.

6. When using dynamic allocated array
->don't forget to use (delete[] arrName)

*/

// arr is a pointer to int
void printArray(int *arr, int size) { 
    arr[1]=100;// change reflects to the original(in main)also
}

// it is syntactic sugar, still passed as a pointer
void printArray(int arr[], int size) { 
}

// std::array from the <array> header retains size information
void printArray(const std::array<int, 5>& arr) { 
}


int main(){
    int arr[5];
    for(int i=0;i<5;++i){
        arr[i]=i+1;
    }
    printArray(arr,5);

    for(auto x:arr){
        cout<<x<<endl;
    }
}