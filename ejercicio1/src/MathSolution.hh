#pragma once
#include <vector>

class MathSolution
{
private:
    /* data */
public:
    static float Pow(float, int); 
    static float Pow(float, int, int); 
    MathSolution(/* args */);
    static std::vector<int> Fibonnaci(int);
    ~MathSolution();
};

MathSolution::MathSolution(/* args */)
{
}

MathSolution::~MathSolution()
{
}

float MathSolution::Pow(float base, int power)
{
    if(power == 0) return 1;
    float result = 1;
    for(int i = 0; i < power; i++, result *= base);
    return result;
}

float MathSolution::Pow(float base, int power, int mode)
{
    if(power == 0) return 1;       
    return base * Pow(base, --power, 1);
}

std::vector<int> MathSolution::Fibonnaci(int n)
{
    std::vector<int> f;
    f.push_back(0);
    f.push_back(1);
    for (int i = 2; i < n; i++) { 
        f.push_back(f[i-1] + f[i-2]); 
    } 
    return f;
}
