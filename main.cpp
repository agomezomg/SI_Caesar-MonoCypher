#include <iostream>
#include <string.h>

using namespace std;

string encrypt(int, string);
string decrypt(int, string);

int main() {
	int input;
	do {
		cout << "Input your choice: " << endl;
		cout << "1. Encrypt." << endl;
		cout << "2. Decrypt." << endl;
		cout << "Type 0 to exit." << endl;
		cin >> input;
		if (input == 1) {
			int offset;
			cout << "Please specify an offset: ";
			cin  >> offset;
			string message;
			cout << "Type your message: " << endl;
			cin >> message;
			cout << "Original message: " << message << endl;
			cout << "Encryption: " << encrypt(offset, message) << endl;
		} else if (input == 2) {
			string message;
			cout << "Type your message: " << endl;
			cin >> message;
			string knows_offset;
			cout << "Do you know the offset? [Y/N]" << endl;
			cin >> knows_offset;
			tolower(knows_offset[0]);
			if (knows_offset == "y") {
				int offset;
				cout << "Input offset: ";
				cin >> offset;
				cout << "Original message: " << message << endl;
				cout << "Decryption: " << decrypt(offset, message) << endl;
			} else if (knows_offset == "n") {
				int offset = 1;
				do {
					cout << "decrypting..." << endl;
					cout << "OFFSET = " << offset << endl;
					cout << "Attempt: " << decrypt(offset, message) << endl;
					cout << "Does this make sense? [Y/N]" << endl;
					cin >> knows_offset;
					tolower(knows_offset[0]);
					offset++;
				} while (knows_offset == "n");
			} else {
				cout << "Invalid input value." << endl;
			}			 
		} else if (input == 0) {
			cout << "Goodbye!" << endl;
		} else {
			cout << "Did you make a typo?" << endl;
		}
	} while (input != 0);
	return 0;
}

string encrypt(int offset, string message) {
	for (int i = 0; i < message.length(); i++) {
		message[i] += offset;
	}
	return message;
}

string decrypt(int offset, string message) {
	for (int i = 0; i < message.length(); i++) {
		message[i] -= offset;
	}
	return message;
}