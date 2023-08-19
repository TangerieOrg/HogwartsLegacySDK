#pragma once
#include <cstdint>
#include "USpawnByPrimitiveOptions.hpp"
#pragma pack(push, 1)
class USpawnByPrimitiveOptionsTick : public USpawnByPrimitiveOptions {
public:
    bool bTickEnabled; // 0x28
    char pad_29[0x7];
    static USpawnByPrimitiveOptionsTick* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
