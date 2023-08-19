#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EManagedEyeStatePriority : uint8_t {
    EMOTION = 0,
    CHARACTEROPTIONS = 1,
    SCENERIG = 2,
    SCENERIG_ACTIVE = 3,
    DIALOG = 4,
    EManagedEyeStatePriority_MAX = 5,
};
#pragma pack(pop)
