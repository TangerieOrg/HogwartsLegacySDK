#pragma once
#include <cstdint>
#include "UMultiFX2_Filtered.hpp"
#pragma pack(push, 1)
class UMultiFX2_EnableCCD : public UMultiFX2_Filtered {
public:
    float Duration; // 0x68
    char pad_6c[0x4];
    static UMultiFX2_EnableCCD* StaticClass();
}; // Size: 0x70
#pragma pack(pop)
