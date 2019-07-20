#include <iostream>
#include <omp.h>

void func();

int main(){
#pragma omp paraller
	{
		std::cout << "Hello world!" << std::endl;
	}
	func();
	return 0;
}

void func(){
	std::cout << "Hm..." << std::endl;
}
