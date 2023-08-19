#pragma once
#include <cstdint>
#include "USpawnByPrimitiveOptions.hpp"
#pragma pack(push, 1)
class USpawnByPrimitiveOptionsReceivesDecals : public USpawnByPrimitiveOptions {
public:
    bool bReceivesDecals; // 0x28
    bool bReceivesWeatherDecals; // 0x29
    char pad_2a[0x6];
    static USpawnByPrimitiveOptionsReceivesDecals* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
