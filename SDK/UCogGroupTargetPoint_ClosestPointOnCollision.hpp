#pragma once
#include <cstdint>
#include "UCogGroupTargetPoint.hpp"
#pragma pack(push, 1)
class UCogGroupTargetPoint_ClosestPointOnCollision : public UCogGroupTargetPoint {
public:
    float MinZHeightFromActorLocation; // 0x28
    char pad_2c[0x4];
    static UCogGroupTargetPoint_ClosestPointOnCollision* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
