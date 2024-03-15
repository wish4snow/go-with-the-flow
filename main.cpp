#include <iostream>
#include "HeatFlow.hpp"

int main() {
	HeatFlow h = HeatFlow(10, 5, .1, 100);
	h.pretty_print();

	for (int i = 0; i < 10000; i++) {
		h.tick();
		h.pretty_print();
	}
	return 0;
}
