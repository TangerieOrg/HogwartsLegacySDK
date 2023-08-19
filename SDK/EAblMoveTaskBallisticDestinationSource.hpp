#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EAblMoveTaskBallisticDestinationSource : uint8_t {
    Stratchpad = 0,
    FromTarget = 1,
    ToTarget = 2,
    ToLoc = 3,
    ToParamLoc = 4,
    EAblMoveTaskBallisticDestinationSource_MAX = 5,
};
#pragma pack(pop)
