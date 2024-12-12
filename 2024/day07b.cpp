#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <sstream>
#include <iterator>
#include <regex>
#include <functional>
#include <numeric>
#include <algorithm>

int main(int argc, char* argv[]) {
	if (struct Result{
		inline ~Result() { std::cout << "result " << sum << " for " << std::chrono::duration<double, std::milli>(std::chrono::high_resolution_clock::now() - start).count() << "ms" << std::endl; };
		std::chrono::time_point<std::chrono::high_resolution_clock> start = std::chrono::high_resolution_clock::now();
		uint64_t sum = {};
		} result; argc < 2);
	else if (std::ifstream input(argv[1]); !input);
	else for (std::string line; std::getline(input, line);) {
		if (std::regex pattern(R"((\d+):\s*(.+))"); line.empty());
		else if (std::smatch matches; !std::regex_match(line, matches, pattern));
		else if (uint64_t left = std::stoll(matches[1].str()); false);
		else if (std::istringstream right(matches[2].str()); false);
		else if (std::vector<uint64_t> numbers((std::istream_iterator<uint64_t>(right)), std::istream_iterator<uint64_t>()); numbers.empty());
		else if (auto operators = (std::vector<std::function<uint64_t(uint64_t, uint64_t)>>){std::multiplies<>(), std::plus<>(), [](uint64_t a, uint64_t b){ return std::stoll(std::to_string(a)+std::to_string(b)); }}; false);
		else if (auto calculate = [](uint64_t a, uint64_t b, std::function<uint64_t(uint64_t, uint64_t)> operation) { return operation(a, b); }; false);
		else if (auto variants = [&operators, &calculate, &left](std::vector<uint64_t>& a, uint64_t b){
			std::vector<uint64_t> ret;
			for (auto i : a) for (auto o : operators)  if (auto v = calculate(i,b,o); v <= left) ret.push_back(v);
			return ret;
		}; false);
		else if (std::vector<uint64_t> v; false);
		else for (auto it = numbers.cbegin(); it != numbers.cend(); ++it) {
			if (it == numbers.cbegin()) v.push_back(numbers.front());
			else if (v = variants(v, *it); it == std::prev(numbers.cend()) && std::ranges::any_of(v, [b = left](uint64_t a) { return a == b; })) result.sum += left;
			else if (v.empty()) break;
		}
	}
	return 0;
}