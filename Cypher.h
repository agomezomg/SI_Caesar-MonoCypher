#include <unordered_map>
#include <string.h>
#include <iostream>
#include <fstream>

using std::cout;
using std::cin;
using std::ifstream;
using std::ofstream;
using std::string;
using std::endl;
using std::unordered_map;

class Cypher {
	private:
		//map<key, code>
		unordered_map<char, char> monomap;
	public:
		Cypher();
		~Cypher();
		void printMap();
		string encrypt(string);
		string decrypt(string);
};