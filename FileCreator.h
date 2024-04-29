#pragma once
#include <fstream>
using namespace std;

class FileCreator
{
private:
	ofstream myFile;
public:
	FileCreator(string);
	void WriterFile(string, double, double, double, double, double);
	void WriterHeader();
	void CloseFile();
};
