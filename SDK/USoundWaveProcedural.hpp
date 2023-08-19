#pragma once
#include <cstdint>
#include "USoundWave.hpp"
#pragma pack(push, 1)
class USoundWaveProcedural : public USoundWave {
public:
    char pad_370[0x50];
    static USoundWaveProcedural* StaticClass();
}; // Size: 0x3c0
#pragma pack(pop)
