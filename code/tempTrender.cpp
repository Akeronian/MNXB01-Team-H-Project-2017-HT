#include <iostream>
#include "tempTrender.h"

using namespace std;

tempTrender::tempTrender(string filePath) {
	cout << "The user supplied " << filePath << " as the path to the data file." << endl;
	cout << "You should probably store this information in a member variable of the class. Good luck with the project! :)" << endl;
}

void junkfunc() {
	string datafile = "../datasets/smhi-opendata_Visby.csv";
	tempTrender visbyTempData = tempTrender("../datasets/smhi-opendata_Visby.csv");
	visbyTempData.readFile(datafile);
}
