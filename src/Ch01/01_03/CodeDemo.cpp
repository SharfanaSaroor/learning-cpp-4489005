// Learning C++ 
// Challenge 01_03
// Console Interaction, by Eduardo Corpeño 

#include <iostream>
#include <string>

int main(){
    int a[4];

    std:cout<< "Enter 5 numbers";
    for (int i =0; i<5;i++){
        cin>>a[i];
    }
    float avg = (a[0]+a[1]+a[2]+a[3]+a[4])/5
    std::cout <<" Average: " + avg;

    std::cout << std::endl << std::endl;
    return (0);
}
