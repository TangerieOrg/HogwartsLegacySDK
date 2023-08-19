#pragma once
#include <cstdint>
#include "USpawnByPrimitiveOptions.hpp"
#pragma pack(push, 1)
class USpawnByPrimitiveOptionsDrawDistance : public USpawnByPrimitiveOptions {
public:
    float MinDrawDistance; // 0x28
    float CullDistance; // 0x2c
    bool bNeverDistanceCull; // 0x30
    char pad_31[0x7];
    static USpawnByPrimitiveOptionsDrawDistance* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
