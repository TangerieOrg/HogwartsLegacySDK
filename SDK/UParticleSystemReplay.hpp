#pragma once
#include <cstdint>
#include "UObject.hpp"
#pragma pack(push, 1)
class UParticleSystemReplay : public UObject {
public:
    int32_t ClipIDNumber; // 0x28
    char pad_2c[0x14];
    static UParticleSystemReplay* StaticClass();
}; // Size: 0x40
#pragma pack(pop)
