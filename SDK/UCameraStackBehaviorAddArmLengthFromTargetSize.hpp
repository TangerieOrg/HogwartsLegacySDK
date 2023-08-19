#pragma once
#include <cstdint>
#include "FRuntimeFloatCurve.hpp"
#include "UCameraStackBehaviorBlend.hpp"
class UCameraStackSecondaryTargetGetter;
#pragma pack(push, 1)
class UCameraStackBehaviorAddArmLengthFromTargetSize : public UCameraStackBehaviorBlend {
public:
    UCameraStackSecondaryTargetGetter* Target; // 0x1b8
    FRuntimeFloatCurve ArmLengthOffsetFromTargetSize; // 0x1c0
    bool bUpdateArmLength; // 0x248
    char pad_249[0x17];
    static UCameraStackBehaviorAddArmLengthFromTargetSize* StaticClass();
}; // Size: 0x260
#pragma pack(pop)
