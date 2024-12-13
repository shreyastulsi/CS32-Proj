#ifndef TOOTER
#define TOOTER

class City;

class Tooter
{
public:
    // Constructor
    Tooter(City* cp, int r, int c);

    // Accessors
    int  row() const;
    int  col() const;

    // Mutators
    void move();

private:
    City* m_city;
    int   m_row;
    int   m_col;
};

#endif


