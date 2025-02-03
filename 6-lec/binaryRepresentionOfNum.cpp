#include <iostream>
#include <bitset>

int main()
{
    int num = -10;
    std::bitset<32> binary(num);

    std::cout << "Number: " << num << std::endl;
    std::cout << "Binary representation: " << binary << std::endl;

    return 0;
}