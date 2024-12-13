#ifndef HISTORY
#define HISTORY

#include "globals.h"
class City;

class History
{
public:
	History(int nRows, int nCols);
	bool record(int r, int c);
	void display() const;

private:
	//City* m_city;
	int m_rows;
	int m_cols;
	char m_grid[MAXROWS][MAXCOLS];
};

#endif
