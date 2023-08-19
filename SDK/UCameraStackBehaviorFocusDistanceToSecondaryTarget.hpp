#pragma once
#include <cstdint>
#include "UCameraStackBehaviorFocusDistanceToTarget.hpp"
class UCameraStackSecondaryTargetGetter;
#pragma pack(push, 1)
class UCameraStackBehaviorFocusDistanceToSecondaryTarget : public UCameraStackBehaviorFocusDistanceToTarget {
public:
    UCameraStackSecondaryTargetGetter* SecondaryTarget; // 0x1d0
    bool bSetToPrimaryTargetIfTargetIsInvalid; // 0x1d8
    bool bKeepLastFocusDistance; // 0x1d9
    char pad_1da[0x6];
    static UCameraStackBehaviorFocusDistanceToSecondaryTarget* StaticClass();
}; // Size: 0x1e0
#pragma pack(pop)
