#include "Cypher.h"

Cypher::Cypher() {
	ifstream input;
	string line;
	input.open("key.txt");
	if (!input) {
		perror("Failed to load file.");
	} else {
		while (getline (input, line)) {
			monomap.insert({line[0], line[2]});
			cout << "inserted: " << line[0] << " = " << line[2] << endl;
		}
	}
}

void Cypher::printMap() {
	for (auto a : monomap) {
		cout << a.first << " = " << a.second << endl;
	}
}

string Cypher::encrypt(string message) {
	for (int i = 0; i < message.length(); i++) {
		message[i] = monomap.at(i);
	}
	
	return message;
}

string Cypher::decrypt(string message) {
	for (int i = 0; i < message.length(); i++) {
		unordered_map<char,char> temp;
		for (auto x : monomap) {
			if (message[i] == x.second) {
				message[i] = x.first;
			}
		}
	}
	
	return message;
}

Cypher::~Cypher() {
}