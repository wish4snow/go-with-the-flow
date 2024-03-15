#include <iostream>
#include <vector>
#include "HeatFlow.hpp"

using namespace std;

HeatFlow::HeatFlow(double initial_temperature, int number_of_sections, double K, double sources_and_sinks) {
		
	this->sections.push_back(sources_and_sinks);

	for (int i = 1; i < number_of_sections; i++){
		this->sections.push_back(initial_temperature);
	}

	this->K = K;

	// for (int i = 0; i <number_of_sections; i++) {
	// 	cout << sections[i] << endl;
	// }
}

void HeatFlow::pretty_print() {
	
	for (int i = 0; i < this->sections.size(); i++) {
		cout << "| " << this->sections[i] << " ";
	}
	cout << "|" << endl;
}