#pragma once
#include <cstdint>
#include "UTurnAdjust_TargetDirectionGetter.hpp"
#pragma pack(push, 1)
class UTurnAdjust_JumpDownDirectionGetter : public UTurnAdjust_TargetDirectionGetter {
public:
    static UTurnAdjust_JumpDownDirectionGetter* StaticClass();
}; // Size: 0x28
#pragma pack(pop)
