#include "Memory.h"

int Memory::read(int address)
{
    return m_array[address];
}

void Memory::write(int address, int data)
{
    m_array[address] = data;
}
