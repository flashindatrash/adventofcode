#include <iostream>
#include <fstream>
#include <vector>
#include <unordered_map>
#include <set>

int main(int argc, char* argv[]) {
	if (struct Result{
		inline ~Result() { std::cout << "result " << s.size() << " for " << std::chrono::duration<double, std::milli>(std::chrono::high_resolution_clock::now() - start).count() << "ms" << std::endl; };
		std::chrono::time_point<std::chrono::high_resolution_clock> start = std::chrono::high_resolution_clock::now();
		std::set<std::pair<int,int>> s;
	} result; argc < 2);
	else if (struct{
		int w{},h{};
		std::unordered_map<char,std::vector<std::pair<int,int>>> m;
	} input; false);
	else if (std::ifstream file(argv[1]); !file);
	else if ([&file, &input]{
		for (std::string line; std::getline(file, line); ++input.h)
			if (input.w = (int)line.length(); false);
			else for (int x = 0; x < input.w; ++x)
				if (line[x] == '.');
				else input.m[line[x]].emplace_back(std::make_pair(x,input.h));
	}(); false);
	else for (auto& [c, v] : input.m)
		for (auto& a : v) std::ranges::for_each(v, [&a, &w = input.w, &h = input.h, &r = result.s](const std::pair<int,int>& b){
			if (a == b);
			else if (std::pair<int, int> p{a.first + (a.first - b.first), a.second + (a.second - b.second)}; p.first >= 0 && p.second >= 0 && p.first < w && p.second < h)
				r.insert(p);
		});
	return 0;
}