#pragma once
#include <cstdint>
#include "FRigUnit_HighlevelBaseMutable.hpp"
#include "FRigUnit_SlideChain_WorkData.hpp"
#pragma pack(push, 1)
struct FRigUnit_SlideChain : public FRigUnit_HighlevelBaseMutable {
    FName StartBone; // 0x68
    FName EndBone; // 0x70
    float SlideAmount; // 0x78
    bool bPropagateToChildren; // 0x7c
    char pad_7d[0x3];
    FRigUnit_SlideChain_WorkData WorkData; // 0x80
}; // Size: 0xc8
#pragma pack(pop)
