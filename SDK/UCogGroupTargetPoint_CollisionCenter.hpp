#pragma once
#include <cstdint>
#include "UCogGroupTargetPoint.hpp"
#pragma pack(push, 1)
class UCogGroupTargetPoint_CollisionCenter : public UCogGroupTargetPoint {
public:
    bool bOnlyCollidingComponents; // 0x28
    char pad_29[0x7];
    static UCogGroupTargetPoint_CollisionCenter* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
