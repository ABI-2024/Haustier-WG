#pragma once
#include <string>
#include<iostream>
using namespace std;

class Maus
{
private:
	string name;

public:
	Maus(string _name) {
		name = _name;
	}
	~Maus(void) {
		cout << "Ich sterbe! .... Tod." << endl; // Wie jeder weiß hat eine Katze sieben Leben!
	}

	string sprich() {
		return "Piep";
	}

};
