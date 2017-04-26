#include <iostream>
#include<stdlib.h>
int main()
{
    int info;
    char* wards;

 
    
    std::cout << "write the the size of char ";
    std::cin >> info;
    wards=(char*)malloc(sizeof(char)*info);
    std::cout << "Input:" ;
    std::cin>>wards;
    std::cout << "User input: " <<wards<< std::endl;
        
    
   
    return 0;
}

