# GUASSIAN MATRIX SOLVER
> This program will solve a given matrix. The input must be in terms a file that contains to matrices 

## Language 
> C++

# Pseudocode
### My pseudocode is a watered down version c++; emitting some syntax for brevity.



> 1)Read Input file 


ofstream matrixFile;
matrixAFile.open(argc[1]);

vector<vector><double> > matrix
// load the vector from the input file.
int cols = 0;
while (matrixFilex != eof)
{	
	str line = getLine(matrix);
	// Call a helper function that will return a vectorized version of the string 
	vector<double> vecToAdd = stringToVect(string, " ");
	
	matrix.push_back(vectToAdd)());
}	


> 2)In the real world I would double check all the files are well formed
That is that our columns do not change size in the middle of the file.       
In this case I will opt to make the assumption that the user is responsible for
maintaining dimensions.  


> 3) With that out the way we can start working on some of fun matrix solving!
```c++
//Also need to check if the file exist.
if (!matrixFile)
{
	cout << "Error, check file path" << endl;
}
```


> Pivot

for (int i = 0; i < matrix.size())
{
	
	vector<double> largestCol =  findLargestColumn(matrix);
	swapCol(matrix, largestCol, i);
	

	scale(matrix, i, matrix[i][i]);
	matrix[i][i] = 1;

	eliminate(matrix, i);
}



> 4) functions from above.
void scale(vector<vector<double>>&matrix, int i, double scalingFactor)
{
	for(int j = 0; j < matrix[0].size(); i++)
	{
		matrix[i][j] = matrix[i][j] /s;
	}
}


> 5) eliminate
void eliminate(vector<vector<double>> &matrix, int i)
{
	int startCol = i;
	for (int j = 0; j < matrix.size(); j++)
	{
		int scalar = matrix[j][startCol];
		for(int k = 0; k < matrix[0].size(); k++)
		{
			matrix[i][j] = matrix[i][j] - s * matrix[i][j];
		}
	}	
}

> 6) Back solve
void backSolve(vector<vector<double>> &matrix)
{
	int augCol = matrix[0].size();
	int lastRow = matrix.size();

	for(int i = lastRow; i > 0; i--)
	{
		for (j = i-1; j >= 0; j--)
		{
			double s = matrix[j][i];

			matrix[j][i] -= (s * matrix[i][i])
            matrix[j][augCol] -= (s * matrix[i][augCol])
		}
	} 
}


#Requirements

#Project Layout
##Build
> compiled src code excluding the program executable

##Include
> .h files

##res
> Resource files, matrices to solve

#src
>Source code


# Setup/Compilation & Execution Instructions  
-Untar package.
-make 

### To Run
> ./MatrixSolver res/matrix.txt
The program only takes one parameter, the file path
to matrix one wishes to solve. 

#Author 
-Raphael J. Sandor  
