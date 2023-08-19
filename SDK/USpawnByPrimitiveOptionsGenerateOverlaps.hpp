#pragma once
#include <cstdint>
#include "USpawnByPrimitiveOptions.hpp"
#pragma pack(push, 1)
class USpawnByPrimitiveOptionsGenerateOverlaps : public USpawnByPrimitiveOptions {
public:
    bool bGenerateOverlaps; // 0x28
    char pad_29[0x7];
    static USpawnByPrimitiveOptionsGenerateOverlaps* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
