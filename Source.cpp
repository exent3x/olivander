#include <iostream>
#include<vector>
using namespace std;
int main()
{
    try
    {
        vector v(-27);
        int a[10];
        a[11] = 5;

    }
    catch (range_error)
    {
        cout << "выход за пределы массива" << endl;
    }
    catch (out_of_range)
    {
        cout << "выход за пределы массива" << endl;
    }
    catch (length_error)
    {
        cout << "выход за пределы массива" << endl;
    }
    catch (bad_alloc)
    {
        cout << "выход за пределы массива" << endl;
    }
    return 0;
}
