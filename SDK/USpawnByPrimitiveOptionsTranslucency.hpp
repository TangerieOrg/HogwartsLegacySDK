#pragma once
#include <cstdint>
#include "USpawnByPrimitiveOptions.hpp"
#pragma pack(push, 1)
class USpawnByPrimitiveOptionsTranslucency : public USpawnByPrimitiveOptions {
public:
    int32_t TranslucencySortPriority; // 0x28
    float TranslucencySortDistanceOffset; // 0x2c
    static USpawnByPrimitiveOptionsTranslucency* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
