#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EManagedFacialEmotionPriority : uint8_t {
    AMBIENT = 0,
    MISSION = 1,
    MECHANIC = 2,
    ABLE = 3,
    ANIM = 4,
    SCENERIG_AMBIENT = 5,
    SCENERIG = 6,
    DIALOG = 7,
    EManagedFacialEmotionPriority_MAX = 8,
};
#pragma pack(pop)
