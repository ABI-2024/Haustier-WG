#pragma once
#include <string>
#include<iostream>
using namespace std;

class Katze
{
private:
	string name;

public:
	Katze(string _name) {
		name = _name;
	}
	~Katze(void) {
		cout << "Ich sterbe! .... Tod." << endl; // Wie jeder weiß hat eine Katze sieben Leben!
	}

	string sprich() {
		return "Miau - Mault ";
	}

};

