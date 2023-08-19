#pragma once
#include <cstdint>
#include "UablMotionAdjustTargetLocationGetter.hpp"
#pragma pack(push, 1)
class UablMotionAdjustCreatureAttackLocationGetter : public UablMotionAdjustTargetLocationGetter {
public:
    static UablMotionAdjustCreatureAttackLocationGetter* StaticClass();
}; // Size: 0x28
#pragma pack(pop)
