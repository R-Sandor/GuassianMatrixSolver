/*
 * Author:	Raphael J. Sandor
 * Date:	10/04/2019
 * Version: 1.0
 * 
 * Description: 
 *		This program will solve a matrix using Gaussian Elimation.
 *		Reads an input file of given matrix.
 *
 */

#include <iostream>
#include <fstream> //File reader(ifstream)
#include <vector>

#include "matrixSolver.h"
#include "helper.h"

using namespace std;

vector<vector<double>>  multiplyer(vector<vector<double>> lhs, vector<vector<double>> rhs)
{
	int lhsRows = lhs.size();
	int lhsCols = lhs[0].size();
	vector<vector<double> > result(lhs.size());
    			
	for (int i = 0; i < lhsRows; i++)
	{	
		result[i] = vector<double>(rhs.size());
		for (int j = 0; j < lhsCols; j++)
			for (int k = 0; k < lhsCols; k++)
				result[i][j] += lhs[i][k] * rhs[k][j];
	}
	return result;

}	


int main(int argc, char **argv )
{
	if (argv[1] == NULL)
	{
		cout << "Error: Please provide path to the matrix file. Refer to the README.md" << endl;
		return 1;
	}
	if (argc == 1)
	{	
		cout << "Please run program again with in file path to matrix input file" << endl;
		return 1;
	}
	vector<vector<double> > matrixA { {1,2,3},
									  {4,5,6}
									};
	vector<vector<double> > matrixB {
									  {1,2,3},
									  {4,5,6},
									  {7,8,9}
									};

	//The read in matrix
	vector<vector<double>> matrix;
	string line;
	// used for vector parser helper functions
	string delim = " ";
	//	readFile
	ifstream matrixFile;
	// path to file
	string path = argv[1];
	
	matrixFile.open(path);
	if (!matrixFile)
	{
		cout << "Error: File not found, check file path"<< endl;
		return 1;
	}
	if (matrixFile.is_open())
			while (getline(matrixFile, line) )
			{
				vector<double> inputLine = stringToVector(line, delim);
				matrix.push_back(inputLine);
			}

	for (int i = 0; i < matrix.size(); i++)
	{
		vector<double> largestCol = findLargestCol(matrix);
	}

	printMatrix(matrix);

}
