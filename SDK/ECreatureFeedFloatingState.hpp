#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ECreatureFeedFloatingState {
    Static = 0,
    FreeFloating = 1,
    FloatingToTargetTransform = 2,
    AttachedToTransform = 3,
    ECreatureFeedFloatingState_MAX = 4,
};
#pragma pack(pop)
