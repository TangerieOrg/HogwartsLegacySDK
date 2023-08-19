#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ECreaturePettingBrushFloatingState : uint8_t {
    FreeFloating = 0,
    FloatingToTargetTransform = 1,
    AttachedToTransform = 2,
    ECreaturePettingBrushFloatingState_MAX = 3,
};
#pragma pack(pop)
