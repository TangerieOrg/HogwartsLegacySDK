#pragma once
#include <cstdint>
#include "UAvaMotionWarpWindowFinder.hpp"
class UAblAbilityComponent;
#pragma pack(push, 1)
class UAblMotionWarpWindowFinder : public UAvaMotionWarpWindowFinder {
public:
    UAblAbilityComponent* AblAbilityComponent; // 0x38
    static UAblMotionWarpWindowFinder* StaticClass();
}; // Size: 0x40
#pragma pack(pop)
