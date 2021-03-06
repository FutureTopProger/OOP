#ifndef SQUARE_H
#define SQUARE_H

#include <iostream>
#include "figure.h"

class Square : public Figure
{
public:
	Square();
	Square(std::istream& is);

	void print() const override;
	double area() const override;
	const char* getName() const override;

	Square& operator = (const Square& other);
	bool operator == (const Square& other) const;

	void* operator new (size_t size);
	void operator delete (void* p);

	friend std::ostream& operator << (std::ostream& os, const Square& square);
	friend std::istream& operator >> (std::istream& is, Square& square);

private:
	double m_side;
};

#endif
