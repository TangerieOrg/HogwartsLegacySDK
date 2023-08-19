#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EPrerequisiteType : uint8_t {
    None = 0,
    Disable_On_MissionStatus = 1,
    Enable_On_MissionStatus = 2,
    Disable_On_ProgressionLock = 3,
    Enable_On_ProgressionLock = 4,
    EPrerequisiteType_MAX = 5,
};
#pragma pack(pop)
