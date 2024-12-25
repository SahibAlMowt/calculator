#include <iostream>
#include <stdexcept>

int f1(int a)
{
    if(a < 0)
    {
        throw std::invalid_argument("exp");
    }

    return -a;
}

int f2(int b)
{
    int s = -1;
    try
    {
        s = f1(b);
    }
    catch(const std::invalid_argument &e)
    {
        std::cerr << e.what() << '\n';
    }
    
    

    return s; 
}

int main()
{
    int g;
    std::cin >> g;

    g = f2(g);

    std::cout << g << "\n";

    return 0;
}