#include "Containers.h"
#include <vector>
#include <iostream>

using namespace std;
int main()
{
	MyArray ar1(5);
	ar1.show();
	cout << "\n";

	MyArray ar2(ar1);
	ar2[0] = 1;
	ar2[ar2.getSize() - 1] = 2;
	ar2.show();
	cout << "\n";

	MyArray ar3 = ar2;
	ar3.addCapacity(2);
	ar3[ar3.getCapacity() - 1] = 3;
	ar3.show();
	cout << "\n\n\n";

	ar1.show();
	cout << "\n";
	ar2.show();
	cout << "\n";

	system("pause");
	return 0;
}