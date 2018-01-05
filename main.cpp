#include <iostream>

int main(int argc, char* argv[])
{
    std::cout << "Hello";
    for(int i=0; i!=argc; i++)
    { 
       if(i == 1){
           std::cout << std::string(argv[i]);
       }
    }
    std::cout << "\n";
    return 0;
}
