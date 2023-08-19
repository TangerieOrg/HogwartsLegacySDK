#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EMirrorCtrlClickBehavior : uint8_t {
    Reposition = 0,
    RepositionAndReorient = 1,
    EMirrorCtrlClickBehavior_MAX = 2,
};
#pragma pack(pop)
