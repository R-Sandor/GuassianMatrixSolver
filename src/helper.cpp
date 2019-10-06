/*
 * Useful utilities for the Matrix solver. 
 *
 */

#include <iostream>
#include <vector> //used for print matrix 
#include "helper.h"


using namespace std;
int itemCount(string str, string delim)
{
	int count = 0;
	auto start = 0U;
    auto end = str.find(delim);
    while (end != std::string::npos)
    {
        start = end + delim.length();
		end = str.find(delim, start);
		count++;
    }
	if (count != 0)
		count++;

	return count;

}

vector<double> stringToVector(string str, string delim)
{
	auto start = 0U;
    auto end = str.find(delim);
	vector<double> retVect;
	int count = 0;
    while (end != std::string::npos)
    {
		count++;
		string parsed = str.substr(start, end - start);
		double valToAdd = stod(parsed);
		retVect.push_back(valToAdd);
        start = end + delim.length();
		end = str.find(delim, start);
    }
	if (count >0)
	{
		string parsed = str.substr(start, end - start);
		double valToAdd = stod(parsed);
		retVect.push_back(valToAdd);
	}
	return retVect;

}


void printMatrix(vector<vector<double> > matrix)
{
	for (int i = 0; i < matrix.size(); i++)
	{
		for (int j = 0; j < matrix[i].size(); j++)
				cout << matrix[i][j] << " "; 
		cout << endl;
	}
}
