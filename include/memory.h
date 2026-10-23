#pragma once

#include <cstdint>
#include <array>

struct Memory
{
    std::array<uint8_t, 256> memory{};

    uint8_t read(uint8_t address) { return memory[address]; };
    void write(uint8_t address, uint8_t value) { memory[address] = value; };

};