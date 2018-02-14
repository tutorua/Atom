/*
https://www.youtube.com/watch?v=7LxepUEcXA4
C++ - copy and swap
Bradley Needham
*/

#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

// Start from a resource management class
class DynArray
{
public:
    DynArray(int size = 0) :
        m_size(size), m_data(m_size ? new int[m_size]() : 0) {}
    DynArray(const DynArray& other) :
        m_size(other.m_size), m_data(m_size ? new int[m_size]() : 0)
    {
        std::copy(other.m_data, other.m_data + m_size, m_data);
    }

    friend void swap(DynArray& first, DynArray& second)
    {
        using std::swap;
        swap(first.m_size, second.m_size);
        swap(first.m_data, second.m_data);
    }

    DynArray& operator=(DynArray copy)
    {
        swap(*this, copy);
        return *this;
    }

    ~DynArray()
    {
        delete [] m_data;
    }

private:
    int m_size;
    int * m_data;
};


int main()
{
    cout << "Copy and Swap in C example:" << '\n';
    cout << "Class DynArray was introduced here." << '\n';
    //getch();
    return 0;
}
