#pragma once
#include <cstdint>
#include "UObject.hpp"
#pragma pack(push, 1)
class UFXSystemAsset : public UObject {
public:
    uint32_t MaxPoolSize; // 0x28
    uint32_t PoolPrimeSize; // 0x2c
    static UFXSystemAsset* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
