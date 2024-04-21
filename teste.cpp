#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> v = {1, 2, 5, 6, 7};
    for (auto element : v)
    {
        cout << element << " ";
    }

    cout << endl;
    return 0;
}