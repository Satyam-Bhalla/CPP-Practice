#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> v;
    vector<int> b(5, 10);              // 5 times 10
    vector<int> c(b.begin(), b.end()); ///first index and 1 index next to the last index
    vector<int> d{1, 2, 3, 4, 5};

    // pop_back removes the last element
    d.pop_back();

    // insert elemenets in the middle of the vector: O(n)
    d.insert(d.begin() + 2, 3, 200);

    // Delete few elements from the middle of the vector
    d.erase(d.begin() + 1, d.begin() + 4);

    // Iterate using a loop
    for (int i = 0; i < d.size(); i++)
    {
        cout << d[i] << " ";
    }
    cout << endl;

    cout << "Capacity of d is " << d.capacity() << endl;

    d.resize(5);

    cout << "Capacity of d is " << d.capacity() << endl;

    d.clear();
    cout << "Size of d is " << d.size() << endl;

    if (d.empty())
    {
        cout << "No elemenets available" << endl;
    }
    else
    {
        for (int i = 0; i < d.size(); i++)
        {
            cout << d[i] << " ";
        }
        cout << endl;
    }

    d.push_back(10);
    d.push_back(20);
    d.push_back(30);
    d.push_back(40);

    // First and last element from a vector
    cout << d.front() << endl;
    cout << d.back() << endl;

    // Sort vector
    sort(d.begin(),d.end());


    return 0;
}