#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <regex>
#include <numeric>

int main(int argc, char* argv[]) {
	if (std::vector<int> mul; argc < 2);
	else if (std::ifstream file(argv[1]); !file);
	else if (std::string input((std::istreambuf_iterator<char>(file)), std::istreambuf_iterator<char>()); input.empty());
	else if ([&input, &mul]{
		if (bool enabled = true; false);
		else if (std::string mode_enable = "do()"; false);
		else if (std::string mode_disable = "don't()"; false);
		else if (std::regex pattern(R"(^mul\((\d{1,3}),(\d{1,3})\))"); false);
		else for (auto it = input.cbegin(); it != input.cend(); ++it) {
			if (std::equal(mode_enable.begin(), mode_enable.end(), it))
				enabled = true, it += mode_enable.length();
			if (std::equal(mode_disable.begin(), mode_disable.end(), it))
				enabled = false, it += mode_disable.length();
			else if (!enabled);
			else if (std::smatch matches; std::regex_search(it, input.cend(), matches, pattern))
				mul.push_back(std::stoi(matches[1].str())*std::stoi(matches[2].str())), it += matches.position() + matches.length() - 1;
		}
	}(); mul.empty());
	else std::cout << std::accumulate(mul.begin(), mul.end(), 0) << std::endl;
	return 0;
}