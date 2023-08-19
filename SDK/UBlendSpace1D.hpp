#pragma once
#include <cstdint>
#include "UBlendSpaceBase.hpp"
#pragma pack(push, 1)
class UBlendSpace1D : public UBlendSpaceBase {
public:
    bool bScaleAnimation; // 0x148
    char pad_149[0x7];
    static UBlendSpace1D* StaticClass();
}; // Size: 0x150
#pragma pack(pop)
