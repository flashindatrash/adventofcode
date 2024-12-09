#include <iostream>
#include <fstream>
#include <string>
#include <vector>

int main(int argc, char* argv[]) {
	if (std::vector<std::vector<char>> matrix; argc < 2);
	else if (std::ifstream input(argv[1]); !input);
	else if ([&input, &matrix]{
		for (std::string line; std::getline(input, line);)
			if (auto& row = matrix.emplace_back(); false);
			else for (auto c : line) row.push_back(c);
		}(); false);
	else if (auto count = 0);
	else if ([&matrix, &count]{
		if (const std::string& search = "MAS"; false);
		else for (size_t y = 1; y < matrix.size() - 1; ++y)
			for (size_t x = 1; x < matrix[y].size() - 1; ++x)
				if (auto cross = 0);
				else for (auto d : {std::make_pair(1,1), std::make_pair(-1,1), std::make_pair(1, -1), std::make_pair(-1, -1)})
					if (std::string v{matrix[y-d.second][x-d.first],matrix[y][x],matrix[y+d.second][x+d.first]}; false);
					else if (cross += v == search; cross >= 2) { ++count; break;}
	}(); false);
	else std::cout << count << std::endl;
	return 0;
}