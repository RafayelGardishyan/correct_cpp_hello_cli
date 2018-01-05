#include <iostream>

int main(int argc, char* argv[])
{
    std::cout << "Hello";
    for(int i=0; i!=argc; i++)
    {
       if(std::string(argv[i]) == "world"){
           std::cout << " world";
       }
    }
    std::cout << "\n";
    return 0;
}
