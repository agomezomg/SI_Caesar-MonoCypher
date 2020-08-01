#include "Cypher.h"

int main() {
	Cypher* cypher = new Cypher();
	string message;
	cout << "To change encryption, please refer to source txt." << endl;
	int choice;
	do {
		cout << "What do you need?" << endl;
		cout << "1. Encrypt." << endl;
		cout << "2. Decyrpt." << endl;
		cout << "Press 0 to exit." << endl;
		cin >> choice;
		if (choice == 1) {
			char message[100];
			cout << "Type in your message: " << endl;
			cout << ">> ";
			cin.getline(message,sizeof(message));
			cout << "Encrypted message is: " << cypher -> encrypt(message);
		} else if (choice == 2) {
			char message[100];
			cout << "Type in your message: " << endl;
			cout << ">> ";
			cin.getline(message,sizeof(message));
			cout << "Decrypted message is: " << cypher -> decrypt(message);
		} else if (choice == 0) {
			cout << "Goodbye!" << endl;
		} else {
			cout << "Invalid input." << endl;
		}
		
	} while (choice != 0);
	
	delete cypher;
}