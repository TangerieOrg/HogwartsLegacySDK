#pragma once
#include <cstdint>
#include "FVector.hpp"
#include "UCameraStackBehaviorBlend.hpp"
#pragma pack(push, 1)
class UCameraStackBehaviorAddTargetOffset : public UCameraStackBehaviorBlend {
public:
    FVector TargetOffset; // 0x1b8
    bool bTargetLocalSpace; // 0x1c4
    char pad_1c5[0x3];
    static UCameraStackBehaviorAddTargetOffset* StaticClass();
}; // Size: 0x1c8
#pragma pack(pop)
