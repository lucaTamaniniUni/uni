#include <iostream>
using namespace std;

int *read_aux(fstream &file, int &size, int index = 0)
{
    if (file.eof())
    {
        int *arr = new int[size]();
        return arr;
    }
    else
    {
        int value;
        file >> value;
        ++size;
        read_aux(file, size,++index);
        arr[index - 1] = value;
        return arr;
    }
}

int *read(fstream &file, int &size)
{
    size = 0;
    return read_aux(file,size);
}