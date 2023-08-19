#pragma once
#include <cstdint>
#include "EGoalStatusFlags\Type.hpp"
#pragma pack(push, 1)
struct FGoalStatus {
    bool GoalIsActive; // 0x0
    bool SiteIsActive; // 0x1
    bool StationIsActive; // 0x2
    EGoalStatusFlags::Type Status; // 0x3
}; // Size: 0x4
#pragma pack(pop)
