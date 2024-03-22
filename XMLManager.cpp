#include "XMLManager.h"

string* XMLManager::readFile(string path)
{
	string* array;
	string buff;
	int counter = 0;
	ifstream in(path);
	if (in.is_open()) {
		while (getline(in, buff)) {
			addString(array, buff, counter++);
		}
	}
	in.close();
	sizeArray = counter;
	return array;
}

void XMLManager::writeFile(string path, string* array, int size)
{
	ofstream out(path);
	for (int i = 0; i < size; i++) {
		out << array[i] << "\n";
	}
	out.close();
}

int XMLManager::getSizeArray()
{
	return sizeArray;
}

void XMLManager::addString(string*& array, string str, int size)
{
	string* buff = new string[size + 1];
	for (int i = 0; i < size; i++) {
		buff[i] = array[i];
	}
	buff[size] = str;
	delete[] array;
	array = buff;
}
