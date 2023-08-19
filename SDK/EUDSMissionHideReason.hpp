#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EUDSMissionHideReason {
    MISSION_PREREQ_GATED = 0,
    EXCLUSIVE_MISSION_GATED = 1,
    EUDSMissionHideReason_MAX = 2,
};
#pragma pack(pop)
