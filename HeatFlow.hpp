#include <vector>
using namespace std;

class HeatFlow {
	private:
		vector<double> sections;
		double K;
		double sources_and_sinks;

	public:
		HeatFlow (double initial_temperature, int number_of_sections, double K, double sources_and_sinks);

		void tick();
		void pretty_print();
};