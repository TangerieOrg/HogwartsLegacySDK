#pragma once
#include <cstdint>
#include "FBlendTarget.hpp"
#include "FRigUnit.hpp"
#include "FTransform.hpp"
#pragma pack(push, 1)
struct FRigUnit_BlendTransform : public FRigUnit {
    char pad_8[0x8];
    FTransform Source; // 0x10
    TArray<FBlendTarget> Targets; // 0x40
    FTransform Result; // 0x50
}; // Size: 0x80
#pragma pack(pop)
