#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EOverlapEffectsEvent {
    BeginOverlap = 0,
    EndOverlap = 1,
    Hit = 2,
    Tick = 3,
    EOverlapEffectsEvent_MAX = 4,
};
#pragma pack(pop)
