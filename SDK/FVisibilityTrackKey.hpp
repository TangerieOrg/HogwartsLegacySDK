#pragma once
#include <cstdint>
#include "EVisibilityTrackAction.hpp"
#include "EVisibilityTrackCondition.hpp"
#pragma pack(push, 1)
struct FVisibilityTrackKey {
    float Time; // 0x0
    EVisibilityTrackAction Action; // 0x4
    EVisibilityTrackCondition ActiveCondition; // 0x5
    char pad_6[0x2];
}; // Size: 0x8
#pragma pack(pop)
