#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <set>
#include <map>

int main(int argc, char* argv[]) {
	if (struct Result{
		inline ~Result() { std::cout << count << std::endl; };
		int count = {};
	} result; false);
	else if (struct {
		std::vector<std::vector<char>> matrix;
		std::pair<int,int> pos, dir{-1,0};
	} map; false);
	else if (std::ifstream input(argv[1]); !input);
	else if ([&input, &map]{
		for (std::string line; std::getline(input, line);)
			if (auto& row = map.matrix.emplace_back(); false);
			else for (auto c : line)
				if (row.push_back(c); c == '^') map.pos = std::make_pair(map.matrix.size() - 1, row.size() - 1);
	}(); false);
	else if (auto rotate = [](std::pair<int,int>& d) -> std::pair<int,int> {
		if (d == std::pair{-1, 0}) return {0, 1};
		else if (d == std::pair{0, 1}) return {1, 0};
		else if (d == std::pair{1, 0}) return {0, -1};
		else if (d == std::pair{0, -1}) return {-1, 0};
		else return {};
	}; false);
	else if (auto bound = [&m = map.matrix](std::pair<int,int>& p) -> bool {
		return p.first == 0 || p.second == 0 || p.first == (int)m.size()-1 || p.second == (int)m[0].size()-1;
	}; false);
	else if (auto next = [](std::pair<int,int>& p, std::pair<int,int>& d) -> std::pair<int,int> {
		return std::make_pair(p.first+d.first, p.second+d.second);
	}; false);
	else if (auto obstacle = [](std::vector<std::vector<char>>& m, std::pair<int,int>& p){
		return m[p.first][p.second]=='#';
	}; false);
	else for (auto y = 0; y < (int)map.matrix.size(); ++y)
		for (auto x = 0; x < (int)map.matrix[0].size(); ++x)
			if (auto o = std::make_pair(y, x); obstacle(map.matrix, o));
			else if (auto pos = map.pos, dir = map.dir; false);
			else if (std::map<std::pair<int,int>, std::set<std::pair<int,int>>> m; false);
			else while(!bound(pos))
				if (auto& v = m.try_emplace(pos).first->second; v.count(dir) && ++result.count) break;
				else if (auto n = next(pos, dir); v.insert(dir), false);
				else if (obstacle(map.matrix, n) || n == o) dir = rotate(dir);
				else pos = n;
	return 0;
}