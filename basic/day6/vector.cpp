#include "vector.h"

template <class T>
T& Vector<T>::operator[](int i)
{
    return content[i];
}