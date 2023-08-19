#pragma once
#include <cstdint>
#include "FVector.hpp"
#include "UCogGroupTargetPoint.hpp"
#pragma pack(push, 1)
class UCogGroupTargetPoint_World_ActorOffset : public UCogGroupTargetPoint {
public:
    FVector Offset; // 0x28
    char pad_34[0x4];
    static UCogGroupTargetPoint_World_ActorOffset* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
