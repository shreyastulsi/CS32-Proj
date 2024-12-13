#include "History.h"
//#include "City.h"

#include <iostream>
#include <string>
#include <random>
#include <utility>
#include <cstdlib>
using namespace std;

History::History(int nRows, int nCols) {
	m_rows = nRows;
	m_cols = nCols;

	for (int r = 0; r < nRows; r++)
		for (int c = 0; c < nCols; c++)
			m_grid[r][c] = '.';
}

bool History::record(int r, int c) {
	//Checks if r and c are not in City
	if (r > m_rows || r <= 0 || c > m_cols || c <= 0) {
		return false;
	}

	if (m_grid[r - 1][c - 1] == '.')
		m_grid[r - 1][c - 1] = 'A';
	else if (m_grid[r - 1][c - 1] == 'Z')
		return true;
	else
		m_grid[r - 1][c - 1]++;
	return true;


}

void History::display() const
{
	clearScreen();
	for (int r = 0; r <= m_rows; r++)
	{
		for (int c = 0; c <= m_cols; c++)
			cout << m_grid[r][c];
		cout << endl;
	}


	//Put in Game, read spec, explains in detail-
	//cout << "Press enter to continue.";
	//cin.ignore(10000, '\n');
}

