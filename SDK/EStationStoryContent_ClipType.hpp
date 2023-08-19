#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EStationStoryContent_ClipType : uint8_t {
    Enter = 0,
    TransitionIn = 1,
    Idle = 2,
    TransitionOut = 3,
    Exit = 4,
    EStationStoryContent_MAX = 5,
};
#pragma pack(pop)
