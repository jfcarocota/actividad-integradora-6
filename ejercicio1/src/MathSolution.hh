#pragma once

class MathSolution
{
private:
    /* data */
public:
    static float Pow(float, int); 
    static float Pow(float, int, int); 
    MathSolution(/* args */);
    ~MathSolution();
};

MathSolution::MathSolution(/* args */)
{
}

MathSolution::~MathSolution()
{
}

float MathSolution::Pow(float a, int b)
{
    float result = 1;
    for(int i = 0; i < b; i++, result *= a);
    return result;
}

float MathSolution::Pow(float a, int b, int cont)
{
    float result = 1;
    if(cont > 0)
    {
        cont--;
        result *= a;
    }
    return 1;
}
