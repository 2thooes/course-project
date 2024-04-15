#include <iostream>
#include <string>
#include <fstream>
#include "setup.h"
#include "build.h"
using namespace std;

string isopen(ifstream& file)
{
	if (file.is_open()) {
		return("open!");
	}
	return("dont open!");
}

void setup()
{

	string setup_path = "setup.txt";
	ifstream setup_file;
	setup_file.open(setup_path);
	cout << isopen(setup_file);
	string str;
	while(!setup_file.eof())
	{
		str = "";
		setup_file >> str;
		build(str);
		
	}
	setup_file.close();
}
