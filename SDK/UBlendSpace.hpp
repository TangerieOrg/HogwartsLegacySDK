#pragma once
#include <cstdint>
#include "EBlendSpaceAxis.hpp"
#include "UBlendSpaceBase.hpp"
#pragma pack(push, 1)
class UBlendSpace : public UBlendSpaceBase {
public:
    EBlendSpaceAxis AxisToScaleAnimation; // 0x148
    char pad_149[0x7];
    static UBlendSpace* StaticClass();
}; // Size: 0x150
#pragma pack(pop)
