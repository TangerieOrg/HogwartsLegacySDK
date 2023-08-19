#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ECameraStackAnimationFrame : uint8_t {
    World = 0,
    RelativeToTarget = 1,
    RelativeToTargetInitialTransform = 2,
    RelativeToTargetWorldRotation = 3,
    RelativeToCameraYaw = 4,
    RelativeToCameraRotation = 5,
    Additive = 6,
    RelativeToSecondaryTarget = 7,
    ECameraStackAnimationFrame_MAX = 8,
};
#pragma pack(pop)
