#include "BrazoRobotico.h"

using namespace std;

int main(){
	BrazoRobotico r1();
	r1.mover(3.2, 2.4, 6.7);
	r1.coger();
	cout << "El robot ahora esta en " << r1.getx() << r1.getY() << r1.getZ() << endl;

	return 0;
}
