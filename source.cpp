#include <iostream>

void func();

int main(){
	std::cout << "Goodbye world!" << std::endl;

	func();

	return 0;
}
void func(){
	std::cout << "Hm..." << std::endl;
}
