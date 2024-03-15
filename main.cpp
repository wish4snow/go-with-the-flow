#include <iostream>
#include "HeatFlow.hpp"

int main() {
	HeatFlow h = HeatFlow(20, 10, 0.5, 100);
	h.pretty_print();

	h.tick();
	h.pretty_print();
	return 0;
}
