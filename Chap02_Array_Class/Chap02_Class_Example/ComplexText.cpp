#include "Complex.h"
void main()
{
	Complex a, b, c;
	a.read("A=");
	a.read("B=");
	c.add(a, b);
	a.printf("A=");
	b.printf("B=");
	c.printf("A+B=");
}