#pragma once
#include <vector>

class MathSolution
{
private:
    /* data */
public:
    static float Pow(float, int); 
    static float Pow(float, int, int); 
    static float Fibonnaci(int);
    static float Fibonnaci(int, int);
    static float Euclides(int, int);
    static float Euclides(int, int, int);
    MathSolution(/* args */);
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

float MathSolution::Fibonnaci(int n)
{
    std::vector<int> f;
    f.push_back(0);
    f.push_back(1);
    for (int i = 2; i < n; i++) 
    { 
        f.push_back(f[i-1] + f[i-2]); 
    } 
    return f[f.size() - 1];
}

float MathSolution::Fibonnaci(int n, int mode)
{
    if(n < 2)
        return n;

    return Fibonnaci(n-1) + Fibonnaci(n-2);
}

float MathSolution::Euclides(int n, int d)
{
    int c;

    while (n!=d)
    {
        if (n>d)
            n=n-d;
        else
            d=d-n;
    }
    c=n;

    return c;
}

float MathSolution::Euclides(int n, int d,int mode)
{
    return (!d) ? n : Euclides(d,n%d);
} 
