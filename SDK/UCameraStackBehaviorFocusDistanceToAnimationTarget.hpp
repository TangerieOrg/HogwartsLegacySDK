#pragma once
#include <cstdint>
#include "UCameraStackBehaviorFocusDistanceToTarget.hpp"
class UCameraStackSecondaryTargetGetter;
#pragma pack(push, 1)
class UCameraStackBehaviorFocusDistanceToAnimationTarget : public UCameraStackBehaviorFocusDistanceToTarget {
public:
    UCameraStackSecondaryTargetGetter* SecondaryTarget; // 0x1d0
    static UCameraStackBehaviorFocusDistanceToAnimationTarget* StaticClass();
}; // Size: 0x1d8
#pragma pack(pop)
