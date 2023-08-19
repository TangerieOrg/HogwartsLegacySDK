#pragma once
#include <cstdint>
#include "UCogGroupTargetPoint.hpp"
#pragma pack(push, 1)
class UCogGroupTargetPoint_CollisionCenterOLD : public UCogGroupTargetPoint {
public:
    bool bOnlyCollidingComponents; // 0x28
    char pad_29[0x7];
    static UCogGroupTargetPoint_CollisionCenterOLD* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
