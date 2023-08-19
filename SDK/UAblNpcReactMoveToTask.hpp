#pragma once
#include <cstdint>
#include "EAblNpcReactMoveToDestinationType.hpp"
#include "EAblNpcReactMoveToSpeedType.hpp"
#include "FVector.hpp"
#include "UAblAbilityTask.hpp"
class UCurveFloat;
#pragma pack(push, 1)
class UAblNpcReactMoveToTask : public UAblAbilityTask {
public:
    EAblNpcReactMoveToDestinationType DestinationType; // 0x70
    char pad_71[0x3];
    FVector CustomDestination; // 0x74
    EAblNpcReactMoveToSpeedType SpeedType; // 0x80
    char pad_81[0x7];
    UCurveFloat* Curve; // 0x88
    float CustomSpeed; // 0x90
    bool bTrackTarget; // 0x94
    bool bStompVelocityAtStart; // 0x95
    bool bDoNotAllowHorizontalMovementAwayFromInstigator; // 0x96
    bool bUseMaxHeight; // 0x97
    bool bIgnoreCapsuleHalfHeight; // 0x98
    char pad_99[0x7];
    static UAblNpcReactMoveToTask* StaticClass();
}; // Size: 0xa0
#pragma pack(pop)
