#include <iostream>
#include <fstream>
#include <vector>
#include <iterator>
#include <functional>
#include <map>

int main(int argc, char* argv[]) {
	if (struct Result{
		inline ~Result() { std::cout << std::endl << "result " << size << " for " << std::chrono::duration<double, std::milli>(std::chrono::high_resolution_clock::now() - start).count() << "ms" << std::endl; };
		std::chrono::time_point<std::chrono::high_resolution_clock> start = std::chrono::high_resolution_clock::now();
		std::vector<uint64_t> a;
		size_t size = {};
	} result; argc < 2);
	else if (std::ifstream file(argv[1]); !file);
	else if (result.a = std::vector<uint64_t>((std::istream_iterator<uint64_t>(file)), std::istream_iterator<uint64_t>()); false);
	else if (std::function<size_t(uint64_t, size_t)> calc = [&](uint64_t n, size_t iter) -> size_t {
		static std::map<std::pair<uint64_t, size_t>, size_t> caches;
		if (!iter--) return 1;
		else if (auto pair = std::make_pair(n, iter); false);
		else if (auto cache = caches.find(pair); cache != caches.end()) return cache->second;
		else if (n == 0) return caches.try_emplace(pair, calc(1, iter)).first->second;
		else if (auto str = std::to_string(n); str.size() % 2) return caches.try_emplace(pair, calc(n*2024, iter)).first->second;
		else if (uint64_t v1 = std::stoll(str.substr(0, str.size()/2)); false);
		else if (uint64_t v2 = std::stoll(str.substr(str.size()/2, str.size())); false);
		else return caches.try_emplace(pair, calc(v1, iter) + calc(v2, iter)).first->second;
	}; false);
	else for (auto it = result.a.begin(); it < result.a.end(); ++it)
		result.size += calc(*it, 75);
	return 0;
}