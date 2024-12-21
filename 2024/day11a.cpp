#include <iostream>
#include <fstream>
#include <vector>
#include <iterator>

int main(int argc, char* argv[]) {
	if (struct Result{
		inline ~Result() { std::cout << "result " << numbers.size() << " for " << std::chrono::duration<double, std::milli>(std::chrono::high_resolution_clock::now() - start).count() << "ms" << std::endl; };
		std::chrono::time_point<std::chrono::high_resolution_clock> start = std::chrono::high_resolution_clock::now();
		std::vector<uint64_t> numbers;
	} result; argc < 2);
	else if (std::ifstream file(argv[1]); !file);
	else if (result.numbers = std::vector<uint64_t>((std::istream_iterator<uint64_t>(file)), std::istream_iterator<uint64_t>()); false);
	else for (int blink = 0; blink < 25; ++blink)
		for (auto it = result.numbers.begin(); it < result.numbers.end(); ++it)
			if (*it == 0) *it = 1;
			else if (auto digits = (int)std::log10(*it) + 1; digits%2) *it*=2024;
			else if (auto divisor = (uint64_t)std::pow(10, digits / 2), n = *it; *it = uint64_t(n/divisor), true) it = result.numbers.insert(it + 1, uint64_t(n % divisor));
	return 0;
}