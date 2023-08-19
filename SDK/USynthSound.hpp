#pragma once
#include <cstdint>
#include "USoundWaveProcedural.hpp"
class USynthComponent;
#pragma pack(push, 1)
class USynthSound : public USoundWaveProcedural {
public:
    USynthComponent* OwningSynthComponent; // 0x3c0
    char pad_3c8[0x18];
    static USynthSound* StaticClass();
}; // Size: 0x3e0
#pragma pack(pop)
