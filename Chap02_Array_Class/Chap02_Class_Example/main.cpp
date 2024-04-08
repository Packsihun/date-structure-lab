#include <cstdio>
//#include "car.h"
//#include "sportscar.h"
#include "rectangle.h"

void main() {
	//car 클래스 사용
	/*car mycar(50, "K3", 4);
	car yourcar(100, "K5", 3);
	mycar.display();
	yourcar.display();
	mycar.whereAmI();
	yourcar.whereAmI();
	//sportscar 클래스 사용
	sportscar scar;
	scar.speedup();
	*/
	rectangle r(12, 20);
	double perimeter = r.getperimeter();
	std::cout << "rectangle 1:" << std::endl;
    std::cout << "area:" << r.getarea() << std::endl;
	std::cout << "perimeter" << perimeter << std::endl;
	std::cout << "is square?" << std::boolalpha << r.issquare() << std::endl;
}
