// runtime_error.cpp
// compile with: /EHsc /GR
#include <iostream>
#include <typeinfo>
#include <string>

using namespace std;
class PositiveNumber
{
    int positiveNumber;
public:
    PositiveNumber(int num) :positiveNumber(num)
    {
        if (num < 0)
            throw exception("negative number");
    }
};
int main()
{
    //string a = "1";
    int a = -1;
    auto& ti1 = typeid(a);
    cout << ti1.name() << endl;
    // runtime_error
    try
    {
        PositiveNumber n(a);
    }
    catch (exception &e)
    {
        cerr << "Caught " << e.what() << endl;
        cerr << "Type " << typeid(e).name() << endl;
    };
}
/* Output:
Caught bad locale name
Type class std::runtime_error
*/