#pragma once
#include <string>
#include<iostream>
using namespace std;

class Hund
{
private:
	string name;

public:
	Hund(string _name) {
		name = _name;
	}
	~Hund(void) {
		cout << "Ich sterbe! .... Tod." << endl; // Wie jeder wei� hat eine Katze sieben Leben!
	}

	string sprich() {
		return "Wau - Bellt ";
	}

};

