#include "clock.h"
#include <iostream>
#include <thread>

int main() {
	Clock clock;

	int i{ 0 };
	while (i != 100) {
		std::this_thread::sleep_for(std::chrono::seconds(1));
		clock.display_time();
		std::cout << std::endl;
		i++;
	}
	clock.display_time();

	return 0;
}
