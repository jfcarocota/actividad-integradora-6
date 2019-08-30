#include <iostream>
#include <vector>
#include "MathSolution.hh";

int main()
{

    //std::cout << MathSolution::Pow(2.0f, 5, 1) << std::endl;

    std::vector<int> f = MathSolution::Fibonnaci(5);

    for(int i = 0; i < f.size(); i++)
    {
        std::cout << f[i] << std::endl;
    }

    std::getchar();
    return 0;
}