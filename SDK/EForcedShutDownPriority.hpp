#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EForcedShutDownPriority : uint8_t {
    None = 0,
    ConversationPriority = 1,
    StationPriority = 2,
    CinematicPriority = 3,
    HideTriggerPriority = 4,
    SceneRigPriority = 5,
    VisibilityActionPriority = 6,
    EForcedShutDownPriority_MAX = 7,
};
#pragma pack(pop)
