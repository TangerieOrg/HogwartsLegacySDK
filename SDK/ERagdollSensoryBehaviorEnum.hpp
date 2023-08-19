#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ERagdollSensoryBehaviorEnum : uint8_t {
    RSBE_CurrentlyActive = 0,
    RSBE_PriorActive = 1,
    RSBE_HadActive = 2,
    RSBE_MAX = 3,
};
#pragma pack(pop)
