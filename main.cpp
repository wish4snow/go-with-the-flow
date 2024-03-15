#include <iostream>
#include "HeatFlow.hpp"

int main() {
	HeatFlow h = HeatFlow(10, 5, 6, 20);
	h.pretty_print();
	return 0;
}
