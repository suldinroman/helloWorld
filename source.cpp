#include <iostream>
#include <omp.h>


int main()
{
#pragma omp paraller
    {
    	std::cout << "Hello world!" << std::endl;
    }
    return 0;
}