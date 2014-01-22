#include "add.h"
#include "power.h"
#include "multiply.h"
#include <iostream>

int main()
{
	std::cout << power(add(multiply(2,2),4),3)<<std::endl;
	
	return 0;
}
