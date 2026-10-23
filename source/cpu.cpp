#include "cpu.h"

#include "stdio.h"

Cpu::Cpu(Memory &memory)
:memory(memory)
{
    printf("Cpu created! :D\n");
}