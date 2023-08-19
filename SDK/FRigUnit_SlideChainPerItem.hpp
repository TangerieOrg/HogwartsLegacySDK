#pragma once
#include <cstdint>
#include "FRigElementKeyCollection.hpp"
#include "FRigUnit_HighlevelBaseMutable.hpp"
#include "FRigUnit_SlideChain_WorkData.hpp"
#pragma pack(push, 1)
struct FRigUnit_SlideChainPerItem : public FRigUnit_HighlevelBaseMutable {
    FRigElementKeyCollection Items; // 0x68
    float SlideAmount; // 0x78
    bool bPropagateToChildren; // 0x7c
    char pad_7d[0x3];
    FRigUnit_SlideChain_WorkData WorkData; // 0x80
}; // Size: 0xc8
#pragma pack(pop)
