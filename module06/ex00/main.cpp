#include "UnivervalScalar.hpp"
#include <iostream>
#include <iomanip>

int main(int argc, char **argv)
{
	UnivervalScalar scalar = UnivervalScalar(argv[1]);
	scalar.showConversion();
}
