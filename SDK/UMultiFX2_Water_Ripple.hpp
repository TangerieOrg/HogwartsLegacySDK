#pragma once
#include <cstdint>
#include "UMultiFX2_Filtered.hpp"
#pragma pack(push, 1)
class UMultiFX2_Water_Ripple : public UMultiFX2_Filtered {
public:
    float Radius; // 0x68
    float Intensity; // 0x6c
    float Duration; // 0x70
    char pad_74[0x4];
    static UMultiFX2_Water_Ripple* StaticClass();
}; // Size: 0x78
#pragma pack(pop)
