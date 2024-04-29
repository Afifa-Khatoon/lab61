#include "FileCreator.h"

FileCreator::FileCreator(string n)
{
	this->myFile.open(n);
}

void FileCreator::WriterFile(string StoreName, double JanSales, double FebSales , double MarchSales, double AprilSales, double TotalSales)
{
	this->myFile << StoreName << "," << JanSales << "," << FebSales << "," <<MarchSales <<","<<AprilSales<<","<<TotalSales<< endl;
}

void FileCreator::WriterHeader()
{
	this->myFile << "StoreName,JanSales, FebSales, MarchSales, AprilSales, TotalSales" << endl;
}

void FileCreator::CloseFile()
{
	this->myFile.close();
}
