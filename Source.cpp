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
        cout << "����� �� ������� �������" << endl;
    }
    catch (out_of_range)
    {
        cout << "����� �� ������� �������" << endl;
    }
    catch (length_error)
    {
        cout << "����� �� ������� �������" << endl;
    }
    catch (bad_alloc)
    {
        cout << "����� �� ������� �������" << endl;
    }
    return 0;
}
