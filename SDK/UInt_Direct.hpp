#pragma once
#include <cstdint>
#include "UIntProvider.hpp"
#pragma pack(push, 1)
class UInt_Direct : public UIntProvider {
public:
    int32_t Value; // 0x28
    char pad_2c[0x4];
    static UInt_Direct* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
