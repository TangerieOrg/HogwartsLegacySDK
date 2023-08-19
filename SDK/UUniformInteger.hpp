#pragma once
#include <cstdint>
#include "UFieldNodeInt.hpp"
#pragma pack(push, 1)
class UUniformInteger : public UFieldNodeInt {
public:
    int32_t Magnitude; // 0xc8
    char pad_cc[0x4];
    static UUniformInteger* StaticClass();
    UUniformInteger* SetUniformInteger(int32_t Magnitude);
}; // Size: 0xd0
#pragma pack(pop)
