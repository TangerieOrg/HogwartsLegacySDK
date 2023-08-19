#pragma once
#include <cstdint>
#include "USpawnByPrimitiveOptions.hpp"
#pragma pack(push, 1)
class USpawnByPrimitiveOptionsBoundsScale : public USpawnByPrimitiveOptions {
public:
    float BoundsScale; // 0x28
    char pad_2c[0x4];
    static USpawnByPrimitiveOptionsBoundsScale* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
