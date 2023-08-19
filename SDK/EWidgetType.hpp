#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EWidgetType : uint8_t {
    WT_Social = 0,
    WT_Enemy = 1,
    WT_Creature = 2,
    WT_Blip = 3,
    WT_Interact = 4,
    WT_Climb = 5,
    WT_SocialBlip = 6,
    WT_None = 7,
    WT_MAX = 8,
};
#pragma pack(pop)
