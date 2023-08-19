#pragma once
#include <cstdint>
#include "UFloatProvider.hpp"
#pragma pack(push, 1)
class UFloat_RandomInRange : public UFloatProvider {
public:
    float Min; // 0x28
    float Max; // 0x2c
    static UFloat_RandomInRange* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
