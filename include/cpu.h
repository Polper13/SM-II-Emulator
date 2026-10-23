#pragma once

#include "memory.h"

class Cpu
{
public:
    Cpu(Memory &memory);

private:
    Memory &memory;

};