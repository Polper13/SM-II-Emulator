#include "stdio.h"

#include "cpu.h"

int main(int argc, char* argv[])
{
    printf("hi :3\n");

    Memory memory;

    Cpu cpu(memory);

    return 0;
}