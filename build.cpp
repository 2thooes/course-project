#include <iostream>
#include "build.h"

using namespace std;

void build(string str)
{
	cout << str.substr(0,str.find(";"));
}
