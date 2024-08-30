#include <print>
#include "min.h"

int main()
{
	int a{3}, b{4};
	std::println("The minimum of {} and {} is {}.",a,b,min(a,b));
	return 0;
}
