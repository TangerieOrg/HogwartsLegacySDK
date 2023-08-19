#pragma once
#include <cstdint>
#include "ECameraStackResetType.hpp"
#include "FRotator.hpp"
#include "FVector2D.hpp"
class UFloatProvider;
class UTransformProvider;
#pragma pack(push, 1)
struct FCameraActionTransitionSettings {
    UFloatProvider* BlendTime; // 0x0
    ECameraStackResetType ResetType; // 0x8
    char pad_9[0x7];
    UTransformProvider* ResetLookAtLocation; // 0x10
    FRotator FixedArmRotationValue; // 0x18
    FVector2D RotationOffset; // 0x24
    bool bLazyBlend; // 0x2c
    bool bOldCameraStaysValid; // 0x2d
    char pad_2e[0x2];
}; // Size: 0x30
#pragma pack(pop)
