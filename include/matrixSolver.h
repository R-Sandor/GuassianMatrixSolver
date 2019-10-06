#ifndef MATRIX_SOLVER_H
#define MATRIX_SOLVER_H
#include <vector>


/*
 *	Multiplies one matrix by another matrix.
 *	Assumptions: 
 *	The second matrix's rows are equal to the first
 *	matrix's number of columns. Otherwise one can
 *	not do matrix multiplication.
 *
 *	Returns the resulting matrix.
 */
std::vector<std::vector<double>>  multiplyer(std::vector< std::vector<double> >lhs, 
				std::vector< std::vector<double>> rhs);

#endif
