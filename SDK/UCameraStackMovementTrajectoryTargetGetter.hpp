#pragma once
#include <cstdint>
#include "FVector2D.hpp"
#include "UCameraStackSecondaryTargetGetter.hpp"
#pragma pack(push, 1)
class UCameraStackMovementTrajectoryTargetGetter : public UCameraStackSecondaryTargetGetter {
public:
    float TimeAhead; // 0x60
    FVector2D TargetDistanceAheadRange; // 0x64
    FVector2D TargetDistanceSpeedRange; // 0x6c
    float InterpolationSpeed; // 0x74
    bool bDrawDebug; // 0x78
    char pad_79[0x1f];
    static UCameraStackMovementTrajectoryTargetGetter* StaticClass();
}; // Size: 0x98
#pragma pack(pop)
