#include <iostream>

void changeDPnt(double* dPnt);
void changeERef(double& eRef);

int main(void)
{
int i = 0;
int* iPnt = &i;

i = 1;
*iPnt = 2;


double d = 0.5;
std::cout << d << std::endl;
double* dPnt = &d;
changeDPnt(dPnt);
std::cout << d << std::endl;

double e = 0.2;
std::cout << e << std::endl;
//double& eRef = e;
changeERef(e);
std::cout << e << std::endl;
}

void changeDPnt(double* dPnt)
{
	++*dPnt;
}
void changeDPnt(double& eRef)
{
	eRef = eRef+1;
}
