#include <iostream>
#include <string>
#include "figure.h"

using namespace std;

class Figure{
	
private:
	int x;
	int y;
	string color ;

public:

	Figure(int x,int y,string color) {
		this->x = x;
		this->y = y;
		this->color = color;
	}

	Figure() {
		this->x = 0;
		this->y = 0;
		this->color = "none";
	}

	int get_x() {
		return x;
	}

	int get_y() {
		return y;
	}

	string get_color() {
		return color;
	}


};
