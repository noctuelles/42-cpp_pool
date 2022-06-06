#include "UnivervalScalar.hpp"
#include <iostream>
#include <iomanip>

int main(int argc, char **argv)
{
	(void) argc;

	std::cout << std::setprecision(1) << std::fixed;
	if (argc == 2)
	{
		UnivervalScalar scalar = UnivervalScalar(argv[1]);
		scalar.showConversion();
		return (0);
	}
	else if (argv[0])
		std::cout << "usage: " << argv[0] << " <litteral>" << std::endl;
	return (1);
}
