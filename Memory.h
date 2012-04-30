#ifndef __MEMORY_H__
#define __MEMORY_H__
#define MEM_SIZE  1024

class Memory
{
    public:
        Memory();

        int read(int address);

        void write(int address, int data);

    private:
        int m_array[MEM_SIZE];
};
#endif
