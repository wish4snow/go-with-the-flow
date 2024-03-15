#include <iostream>
#include <vector>
#include "HeatFlow.hpp"

using namespace std;

HeatFlow::HeatFlow(double initial_temperature, int number_of_sections, double K, double sources_and_sinks) {
		
	this->sections.push_back(sources_and_sinks);

	for (int i = 1; i < number_of_sections + 1; i++){
		this->sections.push_back(initial_temperature);
	}

	this->K = K;
	this->sources_and_sinks = sources_and_sinks;
	this->initial_temperature = initial_temperature;

	// for (int i = 0; i <number_of_sections; i++) {
	// 	cout << sections[i] << endl;
	// }
}

void HeatFlow::pretty_print() {
	
	for (int i = 0; i < this->sections.size() - 1; i++) {
		cout << "| " << this->sections[i] << " ";
	}
	cout << "|" << endl;
}

void HeatFlow::tick() {
	vector<double> final_sections;
	final_sections.push_back(this->sources_and_sinks);
	
	for (int i = 1; i < this->sections.size() - 1; i++) {
		final_sections.push_back(this->sections[i] + (this->K * (this->sections[i + 1] - (2 * sections[i]) + this->sections[i - 1])));
	}

	final_sections.push_back(this->sections[sections.size() - 1] + (this->K * ((-1 * sections[sections.size() - 1]) + this->sections[sections.size() - 2])));
	// final_sections[final_sections.size() - 1] = this->initial_temperature;
	//final_sections[0] = this->sources_and_sinks;
	this->sections.clear();
	this->sections = final_sections;
}