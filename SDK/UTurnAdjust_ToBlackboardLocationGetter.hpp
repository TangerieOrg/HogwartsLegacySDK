#pragma once
#include <cstdint>
#include "UTurnAdjust_TargetDirectionGetter.hpp"
#pragma pack(push, 1)
class UTurnAdjust_ToBlackboardLocationGetter : public UTurnAdjust_TargetDirectionGetter {
public:
    FName BlackboardKeyName; // 0x28
    static UTurnAdjust_ToBlackboardLocationGetter* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
