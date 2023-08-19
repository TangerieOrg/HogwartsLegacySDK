#pragma once
#include <cstdint>
#include "UTurnAdjust_TargetDirectionGetter.hpp"
#pragma pack(push, 1)
class UTurnAdjust_TowardsLedgeDirectionGetter : public UTurnAdjust_TargetDirectionGetter {
public:
    static UTurnAdjust_TowardsLedgeDirectionGetter* StaticClass();
}; // Size: 0x28
#pragma pack(pop)
