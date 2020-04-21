#include "Containers.h"
#include "MyVector.h"
#include <vector>
#include <iostream>

using namespace std;
int main()
{
	MyVector ar1(5);
	ar1.show();
	cout << "\n";

	MyVector ar2(ar1);
	ar2[0] = 1;
	ar2[ar2.getSize() - 1] = 2;
	ar2.show();
	cout << "\n";

	MyVector ar3 = ar2;
	ar3.addCapacity(2);
	ar3[ar3.getCapacity() - 1] = 3;
	ar3.show();
	cout << "\n";

	ar3.popBack();
	ar3.pushBack(7);
	ar3.pushBack(8);
	ar3.show();
	cout << "\n";
	
	ar3.remove(0);
	ar3.insert(1, 5);
	ar3.show();
	cout << "\n\n\n";

	ar1 = ar1;
	ar1.show();
	cout << "\n";
	ar2 = ar2;
	ar2.show();
	cout << "\n";

	system("pause");
	return 0;
}