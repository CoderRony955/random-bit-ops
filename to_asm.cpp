#include <iostream>
#include <cstdlib>

int main(int argc, char const *argv[])
{
    std::system("g++ -S main.cpp -o main.s");
    return 0;
}
